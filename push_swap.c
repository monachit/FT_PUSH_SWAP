/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:01:55 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/21 00:58:27 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    char **matrix;
    t_list  *a;
    t_list  *b;
    int     i;
    
    i = 0;
    if (ac < 2)
        exit(0);
    matrix = read_the_number(ac, av);
    ft_check_number(matrix);
    ft_check_double(matrix);
    while (matrix[i])
        ft_lstadd_back(&a, ft_lstnew(ft_atoi(matrix[i++])));
    if (a && !is_sorted(a))
    {
        if (stack_len(a) == 2 && !check_difference(a))
            ft_sa(&a);
        else if (stack_len(a) == 3)
            ft_three(&a);
        else
            ft_stack_sort(&a, &b);
    }
}