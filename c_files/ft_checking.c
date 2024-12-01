/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 02:54:18 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/01 03:39:30 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

int	ft_error_checking(int argc, char *str)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		return (1);
	}
	while (ft_isnum(str[i]) || ft_iswhitespace(str[i]))
		i++;
	if (!str[i])
	{
		return (0);
	}
	else
	{
		return (2);
	}
}

int	ft_check_stack_bigger(t_list *stack, int num)
{
	if (ft_lstsize(stack) <= num)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
