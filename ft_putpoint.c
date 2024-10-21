/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:18:24 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/21 11:18:27 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_puthex_long(unsigned long long n, int i)
{
	if (n > 16)
	{
		i = 1 + ft_puthex_long(n / 16, i);
		ft_puthex_long(n % 16, i);
	}
	else
	{
		if (n >= 10)
			i = i + ft_putchar(n - 10  + 'a');
		else
			i = i + ft_putchar(n + '0');
	}
	return (i);
}

int	ft_point(void * n)
{
	unsigned long long	num;
	int	i;

	num = (unsigned long long)n;
	if (num == 0)
		return (ft_putstr("(nil)"));
	i = ft_putstr("0x");
	return (i + ft_puthex_long(num, 0));
}