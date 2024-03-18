/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:35:29 by mnachit           #+#    #+#             */
/*   Updated: 2024/03/17 23:49:01 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_list **a)
{
     int    highest;

    highest = ft_highest_number(*a);
    if (highest == (*a)->content)
        ft_ra(a, 'a');
    else if ((*a)->next->content == highest)
        ft_rra(a, 'a');
    if ((*a)->content > (*a)->next->content)
        ft_sa(a);
}
t_list  *smallest_node(t_list *a)
{
    int tmp_value;
    t_list  *small;

    tmp_value = a->content;
    small = a;
    while (a)
    {
        if (tmp_value > a->content)
        {
            tmp_value = a->content;
            small = a;
        }
        a = a->next;
    }
    return (small);
}

void finalize_ratation(t_list **head, t_list *node, char c)
{
    while ((*head) != node)
    {
        if (c == 'a')
        {
            if (node->is_in_top)
                ft_ra(head, 'a');
            else
                ft_rra(head, 'a');
        }
        if (c == 'b')
        {
            if (node->is_in_top)
                ft_ra(head, 'b');
            else
                ft_rra(head, 'b');            
        }
    }
}

void    ft_sort_five(t_list **a, t_list **b)
{
    t_list  *cheapest;

    while (stack_len(*a) > 3)
    {
        set_position(*a);
        cheapest = smallest_node(*a);
        finalize_ratation(a, cheapest, 'a');
        ft_pa(b, a, 'a');
    }
    ft_three(a);
   while (*b)
       ft_pa(a, b, 'a');
}
t_list	*higgest_node(t_list *head)
{
	int		highest;
	t_list	*highest_node;

	if (NULL == head)
		return (NULL);
	highest = INT_MIN;
	while (head)
	{
		if (head->content > highest)
		{
			highest = head->content;
			highest_node = head;
		}
		head = head->next;
	}
	return (highest_node);
}

t_list *get_cheapest(t_list *a)
{
    t_list  *node;
    int number;

    number = INT_MAX;
    while (a)
    {
        if (a->cost <  number)
        {
            number = a->cost;
            node = a;
        }
        a = a->next;
    }
    return (node);
}

void push(t_list **a, t_list **b)
{
    t_list *node;


    node = get_cheapest(*a);
    if (node->is_in_top && node->targ->is_in_top)
        ft_rr(a, b, node);
    else if (!node->is_in_top && !node->targ->is_in_top)
        ft_rrr(a, b, node);
    finalize_ratation(a, node, 'a');
    finalize_ratation(b, node->targ, 'b');
    ft_pa(b , a, 'b');
}

void    set_bigger_intop(t_list **b)
{
    t_list *bigger;
    set_position(*b);
    bigger = biggest_node(*b);
    if (bigger->is_in_top)
    {
        while (*b != bigger)
            ft_ra(b, 'b');
    }
    else
    {
        while (*b != bigger)
            ft_rra(b, 'b');
    }
}

void    ft_stack_sort(t_list **a, t_list **b)
{
    if (stack_len(*a) == 5)
    {
        ft_sort_five(a, b);
        return ;
    }
    ft_pa(b, a, 'b');
    ft_pa(b, a, 'b');
    int i = 0;
    while (*a)
    {
        initialize(*a, *b);
        push(a, b);
        i = 0;
    }
    set_bigger_intop(b);
    while (*b)
        ft_pa(a, b, 'a');
}