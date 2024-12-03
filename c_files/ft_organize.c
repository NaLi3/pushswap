/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_organize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:15:43 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/03 10:43:16 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

void	ft_organize(t_stack **stack, int max, int min)
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
