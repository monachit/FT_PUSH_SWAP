/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 01:24:10 by mnachit           #+#    #+#             */
/*   Updated: 2024/04/01 00:03:45 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_number(char **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (matrix[i])
	{
		j = 0;
		while (matrix[i][j])
		{
			if (!ft_isdigit(matrix[i][j]))
			{
				if (matrix[i][j] != '+' && matrix[i][j] != '-')
					ft_exit("Error", matrix);
			}
			j++;
		}
		i++;
	}
}

void	ft_check_double(char **matrix, int z)
{
	int	i;
	int	j;

	i = 0;
	while (matrix[i])
	{
		z = 0;
		j = 0;
		while (matrix[i][j])
		{
			if (matrix[i][j] == '+' || matrix[i][j] == '-')
				z++;
			if ((matrix[i][j] >= '0' && matrix[i][j] <= '9') && (matrix[i][j
					+ 1] == '+' || matrix[i][j + 1] == '-'))
				ft_exit("Error", matrix);
			if ((matrix[i][j] == '+' || matrix[i][j] == '-')
				&& (!ft_isdigit(matrix[i][j + 1]) || !ft_isdigit(matrix[i][j
						+ 1])))
				ft_exit("Error", matrix);
			j++;
		}
		if (z >= 2)
			ft_exit("Error", matrix);
		i++;
	}
}

void	ft_check_doublen(char **matrix)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (matrix[i])
	{
		while (matrix[j])
		{
			if (i != j && !ft_strcmp(matrix[i], matrix[j]))
				ft_exit("Error", matrix);
			j++;
		}
		i++;
		j = 0;
	}
}

void	ft_check_error(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		ft_atoi_check(matrix[i++], matrix);
	ft_check_number(matrix);
	ft_check_double(matrix, i);
	while (matrix[i])
		ft_check_final(&matrix[i++]);
	ft_check_doublen(matrix);
}
