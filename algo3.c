/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 22:14:03 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/30 06:53:42 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*smallest_node(t_list *a)
{
	int		tmp_value;
	t_list	*small;

	tmp_value = a->content;
	small = a;
	while (a)
	{
		if (tmp_value > a->content)
		{
			tmp_value = a->content;
			small = a;
		}
		a = a->next;
	}
	return (small);
}

void	finalize_ratation(t_list **head, t_list *node, char c)
{
	while ((*head) != node)
	{
		if (c == 'a')
		{
			if (node->is_in_top)
				ft_ra(head, 'a');
			else
				ft_rra(head, 'a');
		}
		if (c == 'b')
		{
			if (node->is_in_top)
				ft_ra(head, 'b');
			else
				ft_rra(head, 'b');
		}
	}
}

t_list	*higgest_node(t_list *head)
{
	int		highest;
	t_list	*highest_node;

	highest = head->content;
	while (head)
	{
		if (head->content > highest)
		{
			highest = head->content;
			highest_node = head;
		}
		head = head->next;
	}
	return (highest_node);
}

t_list	*get_cheapest(t_list *a)
{
	t_list	*node;
	int		number;

	number = INT_MAX;
	while (a)
	{
		if (a->cost < number)
		{
			number = a->cost;
			node = a;
		}
		a = a->next;
	}
	return (node);
}
