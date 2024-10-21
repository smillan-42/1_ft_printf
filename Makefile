# Las Flags para compilar
FLAG = -Wall -Wextra -Werror
# El nombre del "Programa"
NAME = libftprintf.a
# Los Archivos fuente .c
SRC	=	ft_printf.c \
			ft_putchar.c \
			ft_puthex.c \
			ft_putnbr_un.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_strlen.c \
# Los Archivos "librerias" .o
OBJ = ${SRC:.c=.o}
# Se refiere a lo ejecutable
all: ${NAME}
# Creo el "Programa" a partir de los archivos .o
${NAME}: ${OBJ}
	@ar rcs ${NAME} ${OBJ}
	@echo "${NAME} created and indexed"
# Creo los archivos .o
%.o:%.c
	@gcc ${FLAG} -c $< -o $@
# Borra los archivos .o
clean:
	@rm -f ${OBJ}
	@echo "OBJ cleaned"
# Borra los archivos .o y el "Programa"
fclean:	clean
	@rm -f ${OBJ}
	@rm -f ${NAME}
	@echo "All objects and executable cleaned"
# Borra el "Programa" y recompila
re: fclean all
# Indica a Make que no son archivos reales, sino nombres de objetivos, Esto evita conflictos si existieran archivos con esos mismos nombres.
.PHONY: all clean fclean re