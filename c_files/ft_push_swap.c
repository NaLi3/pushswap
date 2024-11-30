/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:41:42 by ilevy             #+#    #+#             */
/*   Updated: 2024/11/30 19:53:33 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h_files/ft_push_swap.h"

// 0) Check that the argument gives numbers, separated by spaces. Check that there are no duplicates.
// 1) Allocate memory for the two different stacks based on the amount of numbers.
// 2) Put every number in stack A.
// 3) Put two numbers in stack B.
// 4...) Iterate through stack A to find "least amount" of operations (it will be max or min)
// 5) Organize stack A.
// 6..) Iterate through stack B and push to stack A stack B number is smaller than stack A max.
// 6.1..) If numB is smaller than Max A, rotate Max A to the top and push stack B (can check again)
// 7) Rotate one final time and its gg
