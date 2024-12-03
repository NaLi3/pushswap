/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:45:31 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/03 10:49:26 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "ft_printf.h"

typedef struct s_stack
{
	int				value;
	int				position;
	int				cost;
	struct s_stack	*next;
}		t_stack;

//ft_free.c
void	ft_free_tab(char **tab);
void	ft_free_stack(t_stack **stack);

//ft_stack_mngmemt.c
void	ft_swap(t_stack **stack);
void	ft_rotate(t_stack **stack);
void	ft_reverse_rotate(t_stack **stack);
void	ft_push(t_stack **src, t_stack **dest);

//ft_create_stack.c
t_stack	*ft_create_stack(char *str);
t_stack	*ft_stacknew(int content);
t_stack	*ft_stacklast(t_stack *stack);
void	ft_stackadd_back(t_stack **stack, t_stack *new);

//ft_organize.c
void	ft_organize_three(t_stack **stack);

//ft_finding.c
int		ft_find_min_stack(t_stack *stack);
int		ft_find_max_stack(t_stack *stack);
int		ft_stacksize(t_stack *stack);

// ft_checking.c
int		ft_error_checking(int argc, char *str);
int		ft_check_stack_bigger(t_stack *stack, int num);

#endif
