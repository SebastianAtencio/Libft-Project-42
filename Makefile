#Nombre del archivo de la biblioteca
NAME = libft.a

# Compilador y banderas de compilacion
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente y archivos objeto
SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

OBJ = $(SRC:.c=.o)
# Archivo de encabezado

INCLUDE = libft.h

# Crear bibliotecas y eliminar archivos

AR = ar rcs
RM = rm -f


# Regla por defecto que compila todo

all: $(NAME)

# Regla para crear la biblioteca

$(NAME): $(OBJ)
	$(AR) $@ $^

# Pasar de .c a .o

%.o: %.c $(INCLUDE) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

#Regla para eliminar todos los archivos creados

clean:
	$(RM) $(OBJ)

#Eliminar todos los archivos .o y .a

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
