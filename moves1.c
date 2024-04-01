/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:38:38 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/27 04:09:49 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **a, t_list **b, char c)
{
	t_list	*tmp;

	if (!*b)
		exit(0);
	ft_lstadd_front(a, ft_lstnew((*b)->content));
	tmp = *b;
	*b = (*b)->next;
	free(tmp);
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}

void	ft_rr(t_list **a, t_list **b, t_list *node)
{
	if (!*a || !*b)
		exit(0);
	while (*a != node && *b != node->targ)
	{
		ft_ra(a, 'n');
		ft_ra(b, 'n');
		write(1, "rr\n", 3);
	}
	set_position(*a);
	set_position(*b);
}

void	ft_rrr(t_list **a, t_list **b, t_list *node)
{
	if (!*a || !*b)
		exit(0);
	while (*a != node && *b != node->targ)
	{
		ft_rra(a, 'n');
		ft_rra(b, 'n');
		write(1, "rrr\n", 4);
	}
	set_position(*a);
	set_position(*b);
}
