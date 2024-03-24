/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:44:43 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/23 21:35:42 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

#define PUSH_SWAP_H
# include "stdio.h"
# include "limits.h"
# include "stdlib.h"
# include "unistd.h"

typedef struct s_list
{
	int				content;
	int				is_in_top;
	int				index;
	int				cost;
	struct s_list	*next;
	struct s_list	*targ;
}t_list;

void set_position(t_list *a);
char	*get_next_line(int fd);
void    ft_show_error(char *s);
char    **read_the_number(int ac, char **av);
char	*ft_strdup(char *src);
char	**ft_split(char *s, char c);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int	ft_atoi(const char *str);
void ft_check_doubleN(char **matrix);
int	ft_strcmp(char *s1, char *s2);
t_list	*ft_lstnew(int	content);
int stack_len(t_list *a);
int check_difference(t_list *a);
void ft_moves_bonus(t_list **a, t_list **b, char *str);
void    ft_pa(t_list **a, t_list **b, char c);
void	ft_rra(t_list **a, char c);
void	ft_ra(t_list **a, char c);
void	ft_sb(t_list **b, char c);
void	ft_sa(t_list **a, char c);
void	ft_three(t_list **a);
int ft_highest_number(t_list *a);
int is_sorted(t_list *a);
void ft_stack_sort(t_list **a, t_list **b);
void    ft_sort_five(t_list **a, t_list **b);
void	initialize(t_list *a, t_list *b);
int	ft_bigger(int a, int b);
void ft_rr(t_list **a, t_list **b, t_list *node);
void ft_rrr(t_list **a, t_list **b, t_list *node);
t_list *biggest_node(t_list *b);
void    ft_check_double(char **matrix);
int	ft_isdigit(int c);
void ft_check_number(char **matrix);
char	*ft_strchr(char *s, int c);

#endif