/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:01:00 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/02 13:21:27 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/h_files/libft.h"

t_list	*ft_push_swap(int argc, char **argv)
{
	t_stack	*stack_A;

	if (ft_error_checking(argc, str))
		return (NULL);
	if (argc == 2)
	{
		stack_A = ft_create_stack(argv[1]);
	if (!ft_check_stack_bigger(stack_A, 3))
		(ft_organize_3(stack_A));
	else
	{

	}
	return (stack_A);
	}
	// TBD: Make it work when there are multiple arguments with strjoin.

}
// 3...) Iterate through stack A to find "least amount" of operations (it will be max or min)
// 4) Organize stack A.
// 5..) Iterate through stack B and push to stack A stack B number is smaller than stack A max.
// 6.1..) If numB is smaller than Max A, rotate Max A to the top and push stack B (can check again)
// 7) Rotate one final time and its gg
