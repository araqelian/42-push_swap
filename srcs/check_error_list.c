/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:00:30 by darakely          #+#    #+#             */
/*   Updated: 2022/11/07 18:52:50 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_size_int(t_stack *list)
{
	while (list)
	{
		if (list->data > 2147483647 || list->data < -2147483648)
		{
			print_error();
			free_list(&list);
		}
		list = list->next;
	}
}

void	check_char(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!(str[i][j] >= '0' && str[i][j] <= '9'))
			{
				if (str[i][j] == '-' || str[i][j] == '+')
				{
					if ((str[i][j - 1] >= '0' && str[i][j - 1] <= '9')
							|| !(str[i][j + 1] >= '0' && str[i][j + 1] <= '9'))
						print_error();
				}
				else
					print_error();
			}
			j++;
		}
		i++;
	}
}

void	check_duplicate(t_stack *list)
{
	t_stack		*tmp_list;
	long int	num;

	while (list != NULL)
	{
		num = list->data;
		tmp_list = list->next;
		list = tmp_list;
		while (list != NULL)
		{
			if (num == list->data)
			{
				print_error();
				free_list(&list);
			}
			list = list->next;
		}
		list = tmp_list;
	}
}
