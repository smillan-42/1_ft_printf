/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:18:08 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/21 11:18:11 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_puthex(unsigned int n, int i, char x)
{
	if (n > 16)
	{
		i = 1 + ft_puthex(n / 16, i, x);
		ft_puthex(n % 16, i, x);
	}
	else
	{
		if (n >= 10)
			i = i + ft_putchar(n - 10  + x);
		else
			i = i + ft_putchar(n + '0');
	}
	return (i);
}