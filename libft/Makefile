# # **************************************************************************** #
# #                                                                              #
# #                                                         :::      ::::::::    #
# #    Makefile                                           :+:      :+:    :+:    #
# #                                                     +:+ +:+         +:+      #
# #    By: achamsin <achamsin@student.42.fr>          +#+  +:+       +#+         #
# #                                                 +#+#+#+#+#+   +#+            #
# #    Created: 2024/06/11 18:26:24 by achamsin          #+#    #+#              #
# #    Updated: 2024/06/20 13:55:43 by achamsin         ###   ########.fr        #
# #                                                                              #
# # **************************************************************************** #

# SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
#        ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
#        ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
#        ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
#        ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
#        ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
#        ft_strjoin.c ft_split.c ft_strtrim.c  ft_itoa.c \
#        ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
#        ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memdel.c\
#        ft_strcmp.c ft_putendl.c ft_strisnum.c ft_putstr.c ft_skip_spacenl.c\
#        ft_skip_space.c

# SRCSB	= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
# 	ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
# 	ft_lstmap.c ft_lstnew.c ft_lstsize.c
       
# OBJS = ${SRCS:.c=.o}
# OBJSB = ${SRCSB:.c=.o}
# NAME = libft.a
# LIBC = ar rcs
# CC = cc
# RM = rm -f
# CFLAGS = -Wall -Wextra -Werror

# .c.o:
# 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# ${NAME}: ${OBJS}
# 	${LIBC} ${NAME} ${OBJS}

# all: ${NAME}

# bonus: ${NAME} ${OBJSB}
# 	${LIBC} ${NAME} ${OBJSB}
# clean:
# 	${RM} ${OBJS} ${OBJSB}

# fclean: clean
# 	${RM} ${NAME} ${bonus} 

# re: fclean all

# .PHONY : all bonus clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achamsin <achamsin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:48:30 by achamsin          #+#    #+#              #
#    Updated: 2021/12/02 13:26:19 by achamsin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
AR = ar rcs
SRC = ft_isalpha \
	ft_isdigit \
       ft_isspace \
	ft_isalnum \
	ft_isascii \
	ft_isprint \
	ft_isspace \
	ft_ishexdigit \
	ft_strlen \
	ft_memset \
	ft_bzero \
	ft_memcpy \
	ft_memmove \
	ft_strlcpy \
	ft_strlcat \
	ft_toupper \
	ft_tolower \
	ft_strchr \
	ft_strrchr \
	ft_strncmp \
	ft_memchr \
	ft_memcmp \
	ft_strnstr \
	ft_atoi \
	ft_calloc \
	ft_strdup \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_split \
	ft_itoa \
	ft_strmapi \
	ft_striteri \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	get_next_line \
	gnl_utils 
BONUS_SRC = ft_lstnew \
	ft_lstadd_front \
	ft_lstsize \
	ft_lstlast \
	ft_lstadd_back \
	ft_lstdelone \
	ft_lstclear \
	ft_lstiter \
	ft_lstmap  

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))
BONUS_SRCS = $(addsuffix .c, $(BONUS_SRC))
BONUS_OBJS = $(addsuffix .o, $(BONUS_SRC))

.c.o: $(SRCS) $(BONUS_SRCS)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "Libft ready."

bonus: $(OBJS) $(BONUS_OBJS)
	@$(AR) $(NAME) $^
	@echo "Libft + bonus ready."

all: $(NAME)

clean:
	@rm -f *.o
	@echo "Libft: removed .o object files."

fclean: clean
	@rm -f $(NAME)
	@echo "Libft: removed libft.a file."

re: clean all

.PHONY: all clean fclean re bonus
