/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 03:48:30 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/31 23:50:30 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sa_b(t_list **a)
{
	if (*a == NULL || (*a)->next == NULL)
		return ;
	ft_swap(&(*a)->next->content, &(*a)->content);
}

void	ft_sb_b(t_list **b)
{
	if (*b == NULL || (*b)->next == NULL)
		return ;
	ft_swap(&(*b)->next->content, &(*b)->content);
}

void	ft_ra_b(t_list **a)
{
	t_list	*first_list;
	t_list	*last_list;
	t_list	*rotate_list;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	rotate_list = *a;
	first_list = (*a)->next;
	last_list = *a;
	while (last_list->next != NULL)
		last_list = last_list->next;
	last_list->next = rotate_list;
	rotate_list->next = NULL;
	*a = first_list;
}

void	ft_rra_b(t_list **a)
{
	t_list	*first_list;
	t_list	*last_list;
	t_list	*rotate_list;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last_list = *a;
	first_list = *a;
	while (last_list->next->next != NULL)
		last_list = last_list->next;
	rotate_list = last_list->next;
	last_list->next = NULL;
	rotate_list->next = first_list;
	*a = rotate_list;
}
