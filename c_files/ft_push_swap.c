/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:01:00 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/03 14:41:34 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

t_list	*ft_push_swap(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ft_error_checking(argc, str))
		return (NULL);
	stack_a = ft_create_stack(argv[1]);
	stack_b = NULL;
	if (!ft_check_stack_bigger(stack_a, 3))
		ft_organize(&stack_a, ft_max_stack(stack_a), ft_min_stack(stack_a));
	else
	{
		ft_push(&stack_a, &stack_b);
		ft_push(&stack_a, &stack_b);
		ft_organize(&stack_b, ft_max_stack(stack_b), ft_min_stack(stack_b));
	}
	return (stack_a);
	// TBD: Make it work when there are multiple arguments with strjoin.
}
// 2) Push two numbers from A to B and organize them.
// 3...) Iterate through stack A to find "least amount" of operations (it will be max or min)
// 4) Organize stack A.
// 5..) Iterate through stack B and push to stack A stack B number is smaller than stack A max.
// 6.1..) If numB is smaller than Max A, rotate Max A to the top and push stack B (can check again)
// 7) Rotate one final time and its gg
