# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansoulim <ansoulim@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 06:27:46 by ansoulim          #+#    #+#              #
#    Updated: 2022/10/18 18:58:17 by ansoulim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libft.a

SRC_DIR     = src

OBJ_DIR     = obj

INC_DIR     = include

BIN_DIR 	= bin

DEBUG_CFLAGS= -g3 -fsanitize=address

MKDIR_P 	= mkdir -p

RM = rm -rf

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

HEADERS     = $(addprefix $(INC_DIR)/,$(INC_FILES))
SRCS        = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJS        = $(addprefix $(OBJ_DIR)/,$(OBJ_NAME))
TARGET 		= $(addprefix $(BIN_DIR)/,$(NAME))

SRC_FILES   = 	ft_atoi.c       \
				ft_isascii.c    \
				ft_memcmp.c     \
				ft_putendl_fd.c \
				ft_strdup.c     \
				ft_strlen.c     \
				ft_substr.c		\
				ft_bzero.c      \
				ft_isdigit.c    \
				ft_memcpy.c     \
				ft_putnbr_fd.c  \
				ft_striteri.c   \
				ft_strmapi.c    \
				ft_tolower.c	\
				ft_calloc.c     \
				ft_isprint.c    \
				ft_memmove.c    \
				ft_putstr_fd.c  \
				ft_strjoin.c    \
				ft_strncmp.c    \
				ft_toupper.c	\
				ft_isalnum.c    \
				ft_itoa.c       \
				ft_memset.c     \
				ft_split.c      \
				ft_strlcat.c    \
				ft_strnstr.c    \
				ft_isalpha.c    \
				ft_memchr.c     \
				ft_putchar_fd.c \
				ft_strchr.c		\
				ft_strtrim.c	\
				ft_strrchr.c    \
				ft_strlcpy.c    

INC_FILES       = libft.h

all : ${DIRS} ${NAME}

DIRS :
	${MKDIR_P} $(OBJ_DIR) $(BIN_DIR)

OBJ_NAME	= $(SRC_FILES:.c=.o)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c $(HEADER)
	$(CC) $(CFLAGS) $(DEBUG_CFLAGS) -c $< -o $@

$(NAME) : ${OBJS}
	ar rcs ${TARGET} ${OBJS}

clean           :
				${RM} ${OBJS}

fclean          : clean
				${RM} ${TARGET}

re              : fclean all

.PHONY          : all, clean, fclean, re
