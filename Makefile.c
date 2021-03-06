CC = gcc
AR = ar
ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
SRC = ft_strlen.c \
      ft_atoi.c \
      ft_isalpha.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isprint.c \
      ft_isascii.c \
      ft_strncmp.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_itoa.c \
      ft_strnstr.c \
      ft_strjoin.c \
      ft_split.c \
      ft_memcpy.c \
      ft_memset.c \
      ft_bzero.c \
      ft_memccpy.c \
      ft_memmove.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strdup.c \
      ft_calloc.c \
      ft_substr.c \
      ft_strtrim.c \
      ft_strmapi.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_isupper_bonus.c \
      ft_islower_bonus.c 

OBJ = $(SRC: .c=.o)

all = $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	$(CC) -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f libft.so

fclean: clean
	rm -f $(NAME)

re: fclean all
