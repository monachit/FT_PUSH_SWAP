/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_the_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:18:28 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/31 23:37:45 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_call_strjoin(char *s, char *av)
{
	char	*tmp;

	tmp = ft_strjoin(s, av);
	free(s);
	s = ft_strjoin(tmp, " ");
	free(tmp);
	return (s);
}

void	ft_check(char *av, char *s)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i] != ' ')
			return ;
		i++;
	}
	free(s);
	ft_exit("Error", NULL);
}

char	**read_the_number(int ac, char **av)
{
	char	*s;
	char	**r;
	int		i;

	if (ac < 2)
		exit(0);
	i = 1;
	s = ft_strdup("");
	while (i < ac)
	{
		if (ft_strcmp(av[i], " "))
			ft_check(av[i], s);
		s = ft_call_strjoin(s, av[i]);
		i++;
	}
	r = ft_split(s, ' ');
	free(s);
	return (r);
}
