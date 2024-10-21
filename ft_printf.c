/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:17:30 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/21 11:17:39 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_question(va_list guardar, char var)
{
	if (var == 'c')
		return (ft_putchar(va_arg(guardar, int)));
	if (var == 's')
		return (ft_putstr(va_arg(guardar, char *)));
	if (var == 'd' || var == 'i')
		return (ft_putnbr(va_arg(guardar, int), 0));
	if (var == 'x')
		return (ft_puthex(va_arg(guardar, unsigned int), 0, 'a'));
	if (var == 'X')
		return (ft_puthex(va_arg(guardar, unsigned int), 0, 'A'));
	if (var == 'u')
		return (ft_sign(va_arg(guardar, int)));
	if (var == 'p')
		return (ft_point(va_arg(guardar, void *)));
	if (var == '%')
		return (ft_putchar('%'));
	return (0);
}
#include <stdio.h>
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

/*
int	main(void)
{
    ft_printf("Carácter 1 c: %c, Carácter 2 c: %c\n", 'B', 'C');

    ft_printf("PlaBRA s: %s ; %s\n", "holA", "mUNDo");

	ft_printf("NumeRo d: %d ; %d\n", 13546, -932);

	ft_printf("NumeRo i: %i ; %i\n", 13546, -932);

	ft_printf("NumeRo i: %x = 34ea ; %X = 3A4\n", 13546, 932);

	ft_printf("Nummero Sin Signo u: %u = 3456 ; %u = 567", 3456, -567);

	ft_printf("NumeRo i: %p = 0x34ea ; %p = 0x3A4; %p = (nil)\n", 13546, 932, 0);

	ft_printf("NumeRo i: %% ; %%\n");

    return 0;
}
*/
