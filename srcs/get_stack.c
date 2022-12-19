/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:00:33 by darakely          #+#    #+#             */
/*   Updated: 2022/11/07 18:52:24 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*get_stack(char **argv, t_data *stack)
{
	t_stack	*tmp_stack;
	char	**tmp;
	int		i;

	stack->b = NULL;
	tmp = read_str(argv);
	check_char(tmp);
	i = 0;
	stack->a = creat_node(0);
	tmp_stack = stack->a;
	while (tmp[i])
	{
		stack->a->data = ft_atoi(tmp[i]);
		if (tmp[i + 1] != NULL)
			stack->a->next = creat_node(0);
		stack->a = stack->a->next;
		i++;
		stack->count++;
	}
	stack->const_count = stack->count;
	stack->a = tmp_stack;
	check_duplicate(stack->a);
	check_size_int(stack->a);
	free_array(tmp);
	return (stack->a);
}
