NAME := libft.a
OBJ = $(FTS:%.c=%.o)
FTS := ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_tolower.c ft_toupper.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_strchr.c ft_memmove.c ft_strrchr.c ft_calloc.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c ft_striteri.c ft_strmapi.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c
%.o : %.c
	cc -c -Wall -Wextra -Werror $< -I . -o $@
all: $(NAME)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $^
clean :
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
