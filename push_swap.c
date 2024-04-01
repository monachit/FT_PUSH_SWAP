/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:01:55 by mnachit           #+#    #+#             */
/*   Updated: 2024/04/01 01:11:04 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	n_p;
	int	r;
	int	i;

	i = 0;
	n_p = 1;
	r = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n_p = n_p * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (n_p * r);
}

int	main(int ac, char **av)
{
	char	**matrix;
	t_list	*a;
	t_list	*b;
	int		i;

	i = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		exit(0);
	matrix = read_the_number(ac, av);
	ft_check_error(matrix);
	while (matrix[i])
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(matrix[i++])));
	i = 0;
	if (a && !is_sorted(a))
	{
		if (stack_len(a) == 2 && !check_difference(a))
			ft_sa(&a, 'a');
		else if (stack_len(a) == 3)
			ft_three(&a);
		else
			ft_stack_sort(&a, &b);
	}
	ft_free_al(&a, matrix);
}
