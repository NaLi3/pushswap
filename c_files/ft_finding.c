/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:06:51 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/02 13:46:35 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

int	ft_find_max_stack(t_stack *stack)
{
	int	i;
	int	max;

	i = 0;
	max = INT_MIN;
	while (stack[i])
	{
		if ((stack[i] -> value) > max)
			max = (stack[i] -> value);
		i++;
	}
	return (max);
}

int	ft_find_min_stack(t_stack *stack)
{
	int	i;
	int	min;

	i = 0;
	min = INT_MAX;
	while (stack[i])
	{
		if ((stack[i] -> value) < min)
			min = (stack[i] -> value);
		i++;
	}
	return (min);
}
