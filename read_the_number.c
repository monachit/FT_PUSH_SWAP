/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_the_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:18:28 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/07 03:02:18 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char *ft_call_strjoin(char *s, char *av)
{
    static int i;
    if (i == 0)
        s = ft_strjoin(s, av);
    else
        s = ft_strjoin(s, av);
    s = ft_strjoin(s, " ");
    return (s);
}

char    **read_the_number(int ac, char **av)
{
    char    *s;
    char    **r;
    int i;

    i = 1;
    s = ft_strdup("");
    while (i < ac)
    {
        s = ft_call_strjoin(s, av[i]);
        i++;
    }
    r = ft_split(s, ' ');
    free(s);
    return (r);
}