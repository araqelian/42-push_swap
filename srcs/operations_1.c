/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <darakely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:49:03 by darakely          #+#    #+#             */
/*   Updated: 2022/12/19 18:39:43 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_data *list, int i)
{
	long int	num;

	if (list->a == NULL)
		return ;
	num = list->a->next->data;
	list->a->next->data = list->a->data;
	list->a->data = num;
	if (i == 0)
		write(1, "sa\n", 3);
}

void	swap_b(t_data *list, int i)
{
	long int	num;

	if (list->b == NULL)
		return ;
	num = list->b->next->data;
	list->b->next->data = list->b->data;
	list->b->data = num;
	if (i == 0)
		write(1, "sb\n", 3);
}

void	ss(t_data *list)
{
	swap_a(list, 1);
	swap_b(list, 1);
	write(1, "ss\n", 3);
}

void	push_a(t_data *list)
{
	t_stack	*tmp;

	tmp = list->b;
	list->b = list->b->next;
	tmp->next = NULL;
	if (list->a == NULL)
		list->a = tmp;
	else
		add_element_front(&list->a, tmp);
	write(1, "pa\n", 3);
}

void	push_b(t_data *list)
{
	t_stack	*tmp;

	tmp = list->a;
	list->a = list->a->next;
	tmp->next = NULL;
	if (list->b == NULL)
		list->b = tmp;
	else
		add_element_front(&list->b, tmp);
	write(1, "pb\n", 3);
}
