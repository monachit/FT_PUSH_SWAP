/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 22:09:19 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/31 23:58:40 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	j = ft_len((char *)s1, (char *)s2);
	str = malloc(j + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_atoi_check(const char *str, char **matrix)
{
	long	n_p;
	long	r;
	int		i;

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
	r *= n_p;
	if (r > 2147483647 || r < -2147483648)
		ft_exit("Error", matrix);
	return (r);
}

char	*ft_strchr(char *s, int c)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	return (0);
}

int	ft_bigger(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
