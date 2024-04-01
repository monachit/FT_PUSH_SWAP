/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:38:29 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/31 23:53:41 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr_b(t_list **a, t_list **b)
{
	if (*a && (*a)->next)
		ft_ra(a, 'n');
	if (*b && (*b)->next)
		ft_ra(b, 'n');
}

void	ft_rrr_b(t_list **a, t_list **b)
{
	if (*a && (*a)->next)
		ft_rra(a, 'n');
	if (*b && (*b)->next)
		ft_rra(b, 'n');
}

void	ft_ss(t_list **a, t_list **b)
{
	if (*a && (*a)->next)
		ft_sa(a, 'n');
	if (*b && (*b)->next)
		ft_sb(a, 'n');
}

void	ft_pa_b(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*b)
		return ;
	ft_lstadd_front(a, ft_lstnew((*b)->content));
	tmp = *b;
	*b = (*b)->next;
	free(tmp);
}

void	ft_moves_bonus(t_list **a, t_list **b, char *s, char **m)
{
	if (!ft_strcmp(s, "ra\n"))
		ft_ra_b(a);
	else if (!ft_strcmp(s, "rb\n"))
		ft_ra_b(b);
	else if (!ft_strcmp(s, "sa\n"))
		ft_sa_b(a);
	else if (!ft_strcmp(s, "sb\n"))
		ft_sb_b(b);
	else if (!ft_strcmp(s, "pa\n"))
		ft_pa_b(a, b);
	else if (!ft_strcmp(s, "pb\n"))
		ft_pa_b(b, a);
	else if (!ft_strcmp(s, "rra\n"))
		ft_rra_b(a);
	else if (!ft_strcmp(s, "rrb\n"))
		ft_rra_b(b);
	else if (!ft_strcmp(s, "rr\n"))
		ft_rr_b(a, b);
	else if (!ft_strcmp(s, "rrr\n"))
		ft_rrr_b(a, b);
	else if (!ft_strcmp(s, "ss\n"))
		ft_ss(a, b);
	else
		ft_finish1(a, b, s, m);
}
