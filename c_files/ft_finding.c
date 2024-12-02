/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:06:51 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/02 21:53:56 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

int	ft_find_max_stack(t_stack *stack)
{
	t_stack	*current;
	int		max;

	if (!stack)
		return (0);
	max = stack -> value;
	current = stack;
	while (current)
	{
		if (current -> value > max)
			max = current -> value;
		current = current -> next;
	}
	return (max);
}

int	ft_find_min_stack(t_stack *stack)
{
	t_stack	*current;
	int		min;

	min = stack -> value;
	current = stack;
	while (current)
	{
		if (current -> value < min)
			min = (current -> value);
		current = current -> next;
	}
	return (min);
}
