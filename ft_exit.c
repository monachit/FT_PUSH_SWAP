/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 22:29:05 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/31 23:18:11 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(char *s, char **matrix)
{
	int	i;

	i = 0;
	if (matrix)
	{
		while (matrix[i])
			free(matrix[i++]);
		free(matrix);
	}
	i = 0;
	while (s[i])
		write (1, &s[i++], 1);
	exit(0);
}

void	ft_free_al(t_list **a, char **matrix)
{
	t_list	*a1;
	int		i;

	i = 0;
	while (matrix[i])
		free(matrix[i++]);
	free(matrix);
	while (*a)
	{
		a1 = (*a);
		*a = (*a)->next;
		free(a1);
	}
}
