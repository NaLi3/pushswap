# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilevy <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 13:48:13 by ilevy             #+#    #+#              #
#    Updated: 2024/12/01 02:28:27 by ilevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := gcc
CFLAGS := -Wall -Wextra -Werror -I
H_FILES:= h_files/
SRC_DIR := c_files/
OBJ_DIR := o_files/
LIBFT:= libft/
INC_DIR:= $(addprefix $(LIBFT), $(H_FILES));

#Source_files in c_files.

SRC_FILES := ft_push_swap.c

#Source_files and Object_files relative to Makefile

SRC := $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ := $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

#Orders

all:	$(NAME)

objdir_mk:
	@mkdir -p $(OBJ_DIR)

$(NAME):	$(OBJ)
	@make -C $(LIBFT)
	@cp $(LIBFT)/libft.a
	@$(CC) $(CFLAGS) $(INCLUDE) $< -o $@
	@echo "Compiling the Push_Swap program!"

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c | objdir_mk
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "Compiling the printf files!"

clean:
	@rm -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)
	@echo "push_swap.o and libft.a files have been cleaned!"

fclean:	clean
	@rm -rf $(NAME)
	@echo "Push_Swap program has been cleaned!"

re:	fclean all
	@echo "Let's try one more time!"

.PHONY:	re fclean all clean
