/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_organize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:15:43 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/02 13:45:52 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

void	ft_organize_three(t_stack *stack)
{
	int	i;
	int	max;
	int	min;

	i = 0;
	max = ft_find_max_stack(&stack);
	min = ft_find_min_stack(&stack);

}
 //Possible to only use one function by returning both max and min with an int tab;



