NAME = libft.a

SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_strlen.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_bzero.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \

OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall - Werror -Wextra
CC = gcc

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all
