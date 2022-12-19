/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:50:55 by darakely          #+#    #+#             */
/*   Updated: 2022/10/08 14:18:05 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_data	stack;

	if (argc < 2)
		print_error();
	else
	{
		stack.a = get_stack(argv, &stack);
		if (check_list_sort(&stack) == 1)
		{
			get_algorithm(&stack);
			if (stack.b)
				push_a(&stack);
			free_list(&stack.a);
		}
		else
			exit(0);
	}
	return (0);
}
