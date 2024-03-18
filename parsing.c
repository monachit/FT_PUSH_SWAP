/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:24:10 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/18 05:45:07 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

void ft_check_double(char **matrix)
{
    char **matrix1;
    int i;
    int j;

    i = 0;
    while(matrix[i])
    {
        j = 0;
        while (matrix[i][j])
        {
            if ((matrix[i][j] == '-' || matrix[i][j] == '+') && 
                (matrix[i][j + 1] >= '0' && matrix[i][j] <= '9'))
                {
                    while (matrix[i][j] != ' ' && (matrix[i][j] != '-' || matrix[i][j] != '+'))
                    {
                        j++;
                        matrix1[i][j] = matrix[i][j];
                        j++;
                    }
                }
    
        }
    }
}