/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 01:06:59 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/27 04:21:20 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit_b(char *s, char **matrix, t_list **a, t_list **b)
{
	t_list	*a1;
	int		i;

	i = 0;
	while (matrix[i])
		free(matrix[i++]);
	free(matrix);
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	while (*a)
	{
		a1 = (*a);
		*a = (*a)->next;
		free(a1);
	}
	while (*b)
	{
		a1 = (*b);
		*b = (*b)->next;
		free(a1);
	}
	exit(0);
}

void	ft_finish1(t_list **a, t_list **b, char *s, char **m)
{
	free(s);
	ft_exit_b("Error", m, a, b);
}
