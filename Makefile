NAME	= libft.a

SRCS	=ft_isprint.c \
		ft_putendl_fd.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_putnbr_fd.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_putstr_fd.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_memcmp.c \
		ft_split.c \
		ft_strmapi.c \
		ft_isalnum.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \

CC 		= cc

CFLAGS	= -Wextra -Wall -Werror 

OBJS 	= $(SRCS:.c=.o)

HEADERS	= libft.h

%.o : %.c ${HEADERS} Makefile
	${CC} ${CFLAGS} -c $< -o $@ -I $(HEADERS)

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean re
