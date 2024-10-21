j#include "libprintf.h"

int	ft_question(va_list guardar, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(guardar, int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	guardar;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!str)
		return (0);
	va_start(guardar, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (!str[i])
				break ;
			len += ft_question(guardar, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(guardar);
	return (len);
}


int	main(void)
{
    // Prueba 2: Imprimir múltiples caracteres
    ft_printf("Carácter 1: %c, Carácter 2: %c\n", 'B', 'C');

    // Prueba 4: Imprimir con un mix de caracteres y texto
    ft_printf("El carácter inicial es: %c y el final es: %c\n", 'X', 'Z');

    return 0;
}