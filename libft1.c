/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:28:47 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/22 00:34:26 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_nachit(char s, char c)
{
	if ((char )s == c)
		return (1);
	else
		return (0);
}

static int	ft_len1(char *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (ft_nachit((s[i]), c) == 1)
			i++;
		else if (ft_nachit(s[i], c) == 0)
		{
			while (s[i] != c && s[i])
				i++;
			j++;
		}
	}
	return (j);
}

int	ft_bigger(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
static char	**free_al(char **ptr, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(ptr[j]);
		ptr[j] = NULL;
		j++;
	}
	free(ptr);
	ptr = NULL;
	return (NULL);
}

static char	**ft_daym(char *s, char **str, char c, size_t length)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	while (i < length)
	{
		while (s[start] == c && s[start])
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		str[i] = ft_substr(s, start, end - start);
		if (!str[i])
			return (free_al(str, i));
		i++;
		start = end;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char *s, char c)
{
	char	**str;
	size_t	length;

	if (!s)
		return (NULL);
	length = ft_len1(s, c);
	str = malloc((length + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (ft_daym(s, str, c, length));
}
char	*ft_strchr(char *s, int c)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (str[i] == (char )c)
			return (str + i);
		i++;
	}
	return (0);
}