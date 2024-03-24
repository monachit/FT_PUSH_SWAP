/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 05:02:34 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/24 20:22:14 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*biggest_node(t_list *b)
{
	t_list	*retu;

	retu = b;
	while (b)
	{
		if (b->content > retu->content)
			retu = b;
		b = b->next;
	}
	return (retu);
}

void	set_position(t_list *a)
{
	int	stack_le;
	int	stack_middle;
	int	i;

	i = 0;
	stack_le = stack_len(a);
	stack_middle = stack_le / 2;
	while (a)
	{
		a->index = i;
		if (i <= stack_middle)
			a->is_in_top = 1;
		else
			a->is_in_top = 0;
		a = a->next;
		i++;
	}
}

void	set_node_targ(t_list *a, t_list *b)
{
	t_list		*tmp;
	int			number;

	while (a)
	{
		number = INT_MIN;
		tmp = b;
		while (tmp)
		{
			if (a->content > tmp->content && tmp->content > number)
			{
				number = tmp->content;
				a->targ = tmp;
			}
			tmp = tmp->next;
		}
		if (number == INT_MIN)
			a->targ = biggest_node(b);
		a = a->next;
	}
}

void	set_node_cost(t_list *a, t_list *b)
{
	int	a_len;
	int	b_len;

	a_len = stack_len(a);
	b_len = stack_len(b);
	while (a)
	{
		if (a->is_in_top)
		{
			a->cost = a->index;
			if (a->targ->is_in_top)
				a->cost = ft_bigger(a->index, a->targ->index);
			else
				a->cost += b_len - (a->targ->index);
		}
		else
		{
			a->cost = (a_len - a->index);
			if (!(a->targ->is_in_top))
				a->cost = ft_bigger((a_len - a->index),
						(b_len - a->targ->index));
			else
				a->cost += a->targ->index;
		}
		a = a->next;
	}
}

void	initialize(t_list *a, t_list *b)
{
	set_position(a);
	set_position(b);
	set_node_targ(a, b);
	set_node_cost(a, b);
}
