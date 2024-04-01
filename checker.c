/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:15:50 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/30 07:00:01 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	**matrix;
	char	*str;
	int		i;

	i = 0;
	a = NULL;
	b = NULL;
	matrix = read_the_number(ac, av);
	ft_check_error(matrix);
	while (matrix[i])
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(matrix[i++], matrix)));
	str = get_next_line(0);
	i = stack_len(a);
	while (str)
	{
		ft_moves_bonus(&a, &b, str, matrix);
		free(str);
		str = get_next_line(0);
	}
	if (is_sorted_bonus(&a, &b, matrix, str) && i == stack_len(a))
		ft_exit_b("OK", matrix, &a, &b);
	else
		ft_exit_b("KO", matrix, &a, &b);
}
