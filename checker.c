/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:15:50 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/23 21:23:41 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *a = NULL;
    t_list *b = NULL;
    char **matrix;
    char *str;
    int i;

    i = 0;
    matrix = read_the_number(ac, av);
    ft_check_number(matrix);
    ft_check_double(matrix);
    ft_check_doubleN(matrix);
    while (matrix[i])
        ft_lstadd_back(&a, ft_lstnew(ft_atoi(matrix[i++])));
    str = get_next_line(0);
    i = stack_len(a);
    while (str)
    {
        ft_moves_bonus(&a, &b, str);
        str = get_next_line(0);
    }
    if (is_sorted(a) && i == stack_len(a))
    {
        write (1, "OK\n", 3);
        exit(0);
    }
    else
    {
        write (1, "KO\n", 3);
        exit (0);
    }
    return (0);
}