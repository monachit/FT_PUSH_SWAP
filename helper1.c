/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:48:12 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/10 04:26:56 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_show_error(char *s)
{
    printf("%s ", s);
    exit(0);
}

int stack_len(t_list *a)
{
    int i;

    i = 0;
    while (a)
    {
        i++;
        a = a->next;
    }
    return (i);
}

int check_difference(t_list *a)
{
    if (a->content > a->next->content)
        return (0);
    return (1);
}

int ft_highest_number(t_list *a)
{
    int  highest;

    highest = INT_MIN;
    while (a)
    {
        if (a->content > highest)
            highest = a->content;
        a = a->next;
    }
    return (highest);
}

int is_sorted(t_list *a)
{
    while (a->next)
    {
        if (a->content > a->next->content)
            return (0);
        a = a->next;
    }
    return (1);
}