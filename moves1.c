/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:38:38 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/17 02:45:21 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_pa(t_list **a, t_list **b, char c)
{
    t_list *tmp;
    ft_lstadd_front(a, ft_lstnew((*b)->content));
    tmp = *b;
    *b = (*b)->next;
    free(tmp);
    if (c == 'a')
        write (1, "pa\n", 4);
    else if (c == 'b')
        write (1, "pb\n", 4);
}

void ft_rr(t_list **a, t_list **b, t_list *node)
{
    while (*a != node && *b != node->targ)
    {
        ft_ra(a, 'n');
        ft_ra(b, 'n');
        write(1, "rr\n", 3);
    }

    set_position(*a);
    set_position(*b);
}

void ft_rrr(t_list **a, t_list **b, t_list *node)
{
    while (*a != node && *b != node->targ)
    {
        ft_rra(a, 'n');
        ft_rra(b, 'n');
        write(1, "rrr\n", 3);
    }
 
    set_position(*a);
    set_position(*b);
}