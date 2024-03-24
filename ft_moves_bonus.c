/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:38:29 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/23 17:42:30 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_rr_b(t_list **a, t_list **b)
{
    if (!*a || !*b)
        exit(0);
    ft_ra(a, 'n');
    ft_ra(b, 'n');
}

void    ft_rrr_b(t_list **a, t_list **b)
{
    if (!*a || !*b)
        exit(0);
    ft_rra(a, 'n');
    ft_rra(b, 'n');
}

void    ft_ss(t_list **a, t_list **b)
{
    if (!*a || !*b)
        exit(0);
    ft_sa(a, 'n');
    ft_sb(a, 'n');    
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void ft_moves_bonus(t_list **a, t_list **b, char *str)
{
    if (!ft_strcmp(str, "ra\n"))
        ft_ra(a, 'n');
    else if (!ft_strcmp(str, "rb\n"))
        ft_ra(a, 'n');
    else if (!ft_strcmp(str, "sa\n"))
        ft_sa(a, 'n');
    else if (!ft_strcmp(str, "sb\n"))
        ft_sb(b, 'n');
    else if (!ft_strcmp(str, "pa\n"))
    {
        if (!*b)
            exit(0);
        ft_pa(a, b, '1');
    }
    else if (!ft_strcmp(str, "pb\n"))
    {
        if (!*a)
            exit(0);
        ft_pa(b, a, '0');
    }
    else if (!ft_strcmp(str, "rra\n"))
        ft_rra(a, 'n');
    else if (!ft_strcmp(str, "rrb\n"))
        ft_rra(b, 'n');
    else if (!ft_strcmp(str, "rr\n"))
        ft_rr_b(a, b);
    else if (!ft_strcmp(str, "rrr\n"))
        ft_rrr_b(a, b);
    else if (!ft_strcmp(str, "ss\n"))
        ft_ss(a, b);
}