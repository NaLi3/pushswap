/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 03:55:48 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/02 22:59:19 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

t_stack *ft_create_stack(char *str);
t_stack	*ft_stacklast(t_stack *stack);
t_stack	*ft_stacknew(int content);
void	ft_stackadd_back(t_stack **stack, t_stack *new);

t_stack *ft_create_stack(char *str)
{
	int		i;
	char	**tab;
	t_stack	*stack;

	i = 0;
	tab = ft_split(str, ' ');
	stack = NULL;
	while (tab[i])
	{
		ft_stackadd_back(&stack, ft_stacknew(ft_atoi(tab[i])));
		i++;
	}
	ft_free_tab(tab);
	return (stack);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	if (!stack || !new)
		return ;
	if (!*stack)
		*stack = new;
	else
		ft_stacklast(*stack) -> next = new;
}

t_stack	*ft_stacklast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_stack	*ft_stacknew(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(1 * sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> value = content;
	new -> next = NULL;
	new -> position = 0;
	new -> cost = 0;
	return (new);
}
