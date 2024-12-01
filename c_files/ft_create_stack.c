/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 03:55:48 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/01 04:05:14 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

t_list	*ft_create_stack(char *str)
{
	int		i;
	char	**tab;
	t_list	*stack;

	i = 0;
	tab = ft_split(str, ' ');
	while (tab[i++])
		ft_lstadd_back(&stack, ft_lstnew(tab[i]));
	ft_free(tab);
	return (stack);
}
