/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:31:10 by darakely          #+#    #+#             */
/*   Updated: 2022/10/12 16:21:02 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_data *list, int i)
{
	t_stack	*tmp;
	t_stack	*first;

	if (list->a == NULL || list->a->next == NULL)
		return ;
	first = list->a;
	tmp = list->a->next;
	while (list->a->next)
		list->a = list->a->next;
	list->a->next = first;
	first->next = NULL;
	list->a = tmp;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	rotate_b(t_data *list, int i)
{
	t_stack	*tmp;
	t_stack	*first;

	if (list->b == NULL || list->b->next == NULL)
		return ;
	first = list->b;
	tmp = list->b->next;
	while (list->b->next)
		list->b = list->b->next;
	list->b->next = first;
	first->next = NULL;
	list->b = tmp;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	rr(t_data *list)
{
	rotate_a(list, 1);
	rotate_b(list, 1);
	write(1, "rr\n", 3);
}

void	reverse_rotate_a(t_data *list, int i)
{
	t_stack	*prelast;
	t_stack	*tmp;
	t_stack	*last;

	tmp = list->a;
	if (list->a == NULL || list->a->next == NULL)
		return ;
	while (list->a->next->next)
		list->a = list->a->next;
	prelast = list->a;
	list->a = tmp;
	while (list->a->next)
		list->a = list->a->next;
	last = list->a;
	last->next = tmp;
	prelast->next = NULL;
	list->a = last;
	if (i == 0)
		write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_data *list, int i)
{
	t_stack	*prelast;
	t_stack	*tmp;
	t_stack	*last;

	tmp = list->b;
	if (list->b == NULL || list->b->next == NULL)
		return ;
	while (list->b->next->next)
		list->b = list->b->next;
	prelast = list->b;
	list->b = tmp;
	while (list->b->next)
		list->b = list->b->next;
	last = list->b;
	last->next = tmp;
	prelast->next = NULL;
	list->b = last;
	if (i == 0)
		write(1, "rrb\n", 4);
}
