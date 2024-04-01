/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:44:43 by mnachit           #+#    #+#             */
/*   Updated: 2024/04/01 00:01:36 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include "limits.h"
# include "stdio.h"
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
}					t_list;

void				set_position(t_list *a);
char				*get_next_line(int fd);
void				ft_show_error(char *s);
char				**read_the_number(int ac, char **av);
char				*ft_strdup(char *src);
char				**ft_split(char *s, char c);
size_t				ft_strlen(char *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_substr(char *s, unsigned int start, size_t len);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
int					ft_atoi(const char *str);
void				ft_check_doublen(char **matrix);
int					ft_strcmp(char *s1, char *s2);
t_list				*ft_lstnew(int content);
int					stack_len(t_list *a);
int					check_difference(t_list *a);
int					is_sorted_bonus(t_list **a, t_list **b, char **m, char *s);
void				ft_moves_bonus(t_list **a, t_list **b, char *s, char **m);
void				ft_pa(t_list **a, t_list **b, char c);
void				ft_rra(t_list **a, char c);
void				ft_ra(t_list **a, char c);
t_list				*get_cheapest(t_list *a);
t_list				*higgest_node(t_list *head);
void				finalize_ratation(t_list **head, t_list *node, char c);
t_list				*smallest_node(t_list *a);
void				ft_sb(t_list **b, char c);
void				ft_sa(t_list **a, char c);
void				ft_exit(char *s, char **matrix);
void				ft_three(t_list **a);
int					ft_highest_number(t_list *a);
int					is_sorted(t_list *a);
void				ft_stack_sort(t_list **a, t_list **b);
void				ft_sort_five(t_list **a, t_list **b);
void				initialize(t_list *a, t_list *b);
int					ft_bigger(int a, int b);
void				ft_rr(t_list **a, t_list **b, t_list *node);
void				ft_rrr(t_list **a, t_list **b, t_list *node);
t_list				*biggest_node(t_list *b);
void				ft_check_double(char **matrix, int z);
int					ft_isdigit(int c);
int					ft_atoi_check(const char *str, char **matrix);
void				ft_check_number(char **matrix);
char				*ft_strchr(char *s, int c);
int					ft_len(char *s1, char *s2);
void				ft_check_error(char **matrix);
void				ft_check_final(char **matrix);
void				ft_free_al(t_list **a, char **matrix);
void				ft_exit_b(char *s, char **matrix, t_list **a, t_list **b);
void				ft_ra_b(t_list **a);
void				ft_sb_b(t_list **b);
void				ft_sa_b(t_list **a);
void				ft_rra_b(t_list **a);
void				ft_finish1(t_list **a, t_list **b, char *s, char **m);

#endif