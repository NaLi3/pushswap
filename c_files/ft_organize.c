/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_organize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:15:43 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/02 23:48:24 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"
#include "ft_finding.c"
#include "ft_stack_mngment.c"
#include "ft_create_stack.c"

void    ft_organize_three(t_stack **stack)
{
    int max;
    int min;

    if (!stack || (!*stack) || !(*stack)->next || !(*stack)->next->next)
        return;
    max = ft_find_max_stack(*stack);
    min = ft_find_min_stack(*stack);
    if ((*stack)->value == max && (*stack)->next->value == min)
    {
		ft_reverse_rotate(stack);
		ft_reverse_rotate(stack); //
    }
	else if ((*stack)->value == max && (*stack)->next->next->value == min)
    {
			ft_swap(stack);
			ft_reverse_rotate(stack); //
	}
    else if ((*stack)->value == min && (*stack)->next->value == max)
    {
        ft_reverse_rotate(stack);
		ft_swap(stack); //
    }
    else if ((*stack)->next->value == max && (*stack)->next->next->value == min)
        ft_reverse_rotate(stack); //
	else if ((*stack) -> next -> value == min && (*stack)->next->next->value == max)
        ft_swap(stack); //
}


int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = ft_create_stack(argv[1]);
	ft_organize_three(&stack);
	while (stack)
	{
		printf("%d\n", stack -> value);
		stack = stack -> next;
	}
	return (0);
}



