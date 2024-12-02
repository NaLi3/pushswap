/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_mngment.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:23:22 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/02 23:36:30 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

int	ft_stacksize(t_stack *stack)
{
	size_t	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack -> next;
	}
	return (count);
}

void	ft_swap(t_stack **stack)
{
	t_stack	*temp;

	if (!stack || !(*stack) || !(*stack) -> next)
		return ;
	temp = (*stack) -> next;
	(*stack) -> next = temp -> next;
	temp -> next = *stack;
	*stack = temp;
}

void    ft_rotate(t_stack **stack)
{
    t_stack *temp;
    t_stack *first;

    if (!stack || !(*stack) || !(*stack) -> next)
        return ;

    temp = *stack;
    first = *stack;
	*stack = (*stack) -> next;
    while (temp -> next)
        temp = temp -> next;
    temp -> next = first;
	first -> next = NULL;
}


void    ft_reverse_rotate(t_stack **stack)
{
	t_stack	*prev;
	t_stack	*last;

	if (!stack || !(*stack) || !(*stack) -> next)
        return ;
	prev = NULL;
    last = *stack;
    while (last -> next)
    {
        prev = last;
        last = last -> next;
    }
    last -> next = *stack;
	prev -> next = NULL;
	*stack = last;
}

