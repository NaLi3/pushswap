/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:45:31 by ilevy             #+#    #+#             */
/*   Updated: 2024/12/01 04:24:49 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "ft_printf.h"

//ft_free.c
void	ft_free(char **tab);

//ft_create_stack.c
t_list	*ft_create_stack(char *str);

// ft_checking.c
int		ft_error_checking(int argc, char *str);
int		ft_check_stack_bigger(t_list *stack, int num);

#endif
