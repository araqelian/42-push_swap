/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:34:58 by darakely          #+#    #+#             */
/*   Updated: 2022/08/04 13:25:11 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*last_node(t_stack *list)
{
	t_stack	*tmp_list;
	t_stack	*tmp;

	tmp_list = list;
	while (list->next)
		list = list->next;
	tmp = list;
	list = tmp_list;
	return (tmp);
}

t_stack	*creat_node(long int set_data)
{
	t_stack	*new_element;

	new_element = (t_stack *)malloc(sizeof(t_stack));
	if (!new_element)
		return (NULL);
	new_element->data = set_data;
	new_element->next = NULL;
	return (new_element);
}

void	add_element_front(t_stack **list, t_stack *new)
{
	new->next = *list;
	*list = new;
}
