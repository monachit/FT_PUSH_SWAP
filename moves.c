/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:54:24 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/22 18:19:20 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void ft_sa(t_list **a, char c)
{
	if (a == NULL || (*a)->next == NULL)
        exit(0);
    ft_swap(&(*a)->next->content, &(*a)->content);
    if (c == 'a')
        write(1, "sa\n", 3);
}

void ft_sb(t_list **b, char c)
{
    if (b == NULL || (*b)->next == NULL)
        exit(0);
    ft_swap(&(*b)->next->content, &(*b)->content);
    if (c == 'b')
        write(1, "sb\n", 3);
}

void ft_ra(t_list **a, char c)
{
    t_list *first_list;
    t_list  *last_list;
    t_list  *rotate_list;

	if (a == NULL || (*a)->next == NULL)
        exit(0);
    rotate_list = *a;
    first_list = (*a)->next;
    last_list = *a;
    while (last_list->next != NULL)
        last_list = last_list->next;
    last_list->next = rotate_list;
    rotate_list->next = NULL;
    *a = first_list;
    if (c == 'a')
        write (1, "ra\n", 3);
    else if (c == 'b')
        write (1, "rb\n", 3);
}

void ft_rra(t_list **a, char c)
{
    t_list *first_list;
    t_list  *last_list;
    t_list  *rotate_list;

	if (a == NULL || (*a)->next == NULL)
        exit(0);
    last_list = *a;
    first_list = *a;
    while (last_list->next->next != NULL)
        last_list = last_list->next;
    rotate_list = last_list->next;
    last_list->next = NULL;
    rotate_list->next = first_list;
    *a = rotate_list;
    if (c == 'a')
        write (1, "rra\n", 4);
    else if (c == 'b')
        write (1, "rrb\n", 4);
}