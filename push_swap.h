/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:54:54 by darakely          #+#    #+#             */
/*   Updated: 2022/10/08 14:21:12 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct s_stack
{
	struct s_stack	*next;
	long int		data;
	long int		index;
}				t_stack;

typedef struct s_data
{
	int				count;
	int				const_count;
	t_stack			*a;
	t_stack			*b;
}				t_data;

//get_stack
t_stack		*get_stack(char **argv, t_data *stack);

//utils
int			ft_strlen(char *str);
char		*ft_strjoin(char *s1, char *s2);
long int	ft_atoi(const char *str);

//list
t_stack		*creat_node(long int set_data);
t_stack		*last_node(t_stack *list);
void		add_element_front(t_stack **list, t_stack *new);
void		add_element_back(t_stack **list);

//ft_split
char		**ft_split(char *s, char c);

//read_str
char		**read_str(char **argv);

//check_error_list
void		check_duplicate(t_stack *list);
void		check_char(char **str);
void		check_size_int(t_stack *list);

//print_error
void		print_error(void);

//operations_1
void		swap_a(t_data *list, int i);
void		swap_b(t_data *list, int i);
void		ss(t_data *list);
void		push_a(t_data *list);
void		push_b(t_data *list);

//operations_2
void		rotate_a(t_data *list, int i);
void		rotate_b(t_data *list, int i);
void		rr(t_data *list);
void		reverse_rotate_a(t_data *list, int i);
void		reverse_rotate_b(t_data *list, int i);

//operations_3
void		rrr(t_data *list);

//algorithm
void		get_algorithm(t_data *stack);
void		three_node(t_data *stack);
void		five_node(t_data *stack);

//check_list_sort
int			check_list_sort(t_data *stack);

//head_algorithm
void		head_algorithm(t_data *stack);
void		sort_hundred_node(t_data *stack);
void		search_small(t_data *stack);
t_stack		*norm_index(t_data *stack, t_stack *min, t_stack *tmp);
void		aaa(t_data *stack);

//continue_sort_hundred
void		continue_sort_hundred(t_data *stack, int i);
void		continue_sort(t_data *stack, t_stack *tmp, t_stack *tmp_num, int i);

//free_list
void		free_list(t_stack **stack);
void		free_array(char **str);

#endif
