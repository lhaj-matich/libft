HEADER = libft.h
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = ft_strlcpy.c ft_memset.c ft_isdigit.c ft_strlen.c ft_memcmp.c ft_striteri.c ft_itoa.c ft_memcpy.c ft_substr.c ft_calloc.c ft_strmapi.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strtrim.c ft_atoi.c ft_isalpha.c ft_putstr_fd.c ft_strnstr.c ft_isascii.c ft_isprint.c ft_bzero.c ft_toupper.c ft_strlcat.c ft_strchr.c ft_putchar_fd.c ft_memmove.c ft_strdup.c  ft_strjoin.c ft_strrchr.c ft_isalnum.c ft_memchr.c ft_tolower.c ft_strncmp.c
BONUS = ft_lstlast.c ft_lstdelone.c ft_lstsize.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c
OBJ = $(SRC:.c=.o)
OBJBONUS = $(BONUS:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJBONUS) $(HEADER)
	ar rcs $(NAME) $(OBJ) $(OBJBONUS)

clean:
	rm -rf $(OBJ) $(OBJBONUS)

fclean: clean
	rm $(NAME)

re: fclean all
