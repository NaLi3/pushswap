/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_organize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:15:43 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/03 14:55:46 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

void	ft_organize_three(t_stack **stack, int max, int min)
{
	if (!stack || (!*stack) || !(*stack)->next || !(*stack)->next->next)
		return ;
	if ((*stack)->value == max && (*stack)->next->value == min)
	{
		ft_reverse_rotate(stack);
		ft_reverse_rotate(stack);
	}
	else if ((*stack)->value == max && (*stack)->next->next->value == min)
	{
		ft_swap(stack);
		ft_reverse_rotate(stack);
	}
	else if ((*stack)->value == min && (*stack)->next->value == max)
	{
		ft_reverse_rotate(stack);
		ft_swap(stack);
	}
	else if ((*stack)->next->value == max && (*stack)->next->next->value == min)
		ft_reverse_rotate(stack);
	else if ((*stack)->next->value == min && (*stack)->next->next->value == max)
		ft_swap(stack);
}

void	ft_organize_two(t_stack **stack)
{
	if ((*stack)->value > ((*stack)->next)->value)
	{
		ft_swap(stack);
	}
}

// int	main(int argc, char **argv)
// {
// 	t_stack	*stack_a;

// 	stack_a = ft_create_stack(argv[1]);
// 	if (ft_stacksize(stack_a) == 3)
// 		ft_organize_three(&stack_a, ft_max_stack(stack_a), ft_min_stack(stack_a));
// 	else if (ft_stacksize(stack_a) == 2)
// 		ft_organize_two(&stack_a);
// 	while (stack_a)
// 	{
// 		printf("%d\n", stack_a -> value);
// 		stack_a = stack_a -> next;
// 	}
// 	return (0);
// }
