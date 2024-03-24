/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:24:10 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/23 21:36:08 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_check_number(char **matrix)
{
    int i;
    int j;

    i = 0;
    while (matrix[i])
    {
        j = 0;
        while (matrix[i][j])
        {
            if (!ft_isdigit(matrix[i][j]))
            {
                if (matrix[i][j] != '+' && matrix[i][j] != '-')
                    exit(0);
            }
            j++;
        }
        i++;
    }
}

void    ft_check_double(char **matrix)
{
    int i;
    int j;
    int z;
    
    i = 0;
    z = 0;
    while (matrix[i])
    {
        j = 0;
        while (matrix[i][j])
        {
            if (matrix[i][j] == '+' || matrix[i][j] == '-')
                z++;
            if ((matrix[i][j] >= '0' && matrix[i][j] <= '9')
            && (matrix[i][j + 1] == '+' || matrix[i][j + 1] == '-'))
                exit(0);
            if ((matrix[i][j] == '+' || matrix[i][j] == '-') 
            && (!ft_isdigit(matrix[i][j + 1]) || !ft_isdigit(matrix[i][j + 1])))
                exit(0);
            j++;
        }
        if (z >= 2)
            exit(0);
        z = 0;
        i++; 
    }
}

void ft_check_doubleN(char **matrix)
{
    int i;
    int j;
    
    j = 0;
    i = 0;
    while (matrix[i])
    {
        while (matrix[j])
        {
            if (i != j && !ft_strcmp(matrix[i], matrix[j]))
                exit(0);
            j++;
        }
        i++;
        j = 0;
    }    
}