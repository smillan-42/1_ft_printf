/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:18:39 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/21 11:18:41 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_putnbr_un(unsigned int n, int i)
{
	if (n >= 10)
	{
		i = 1 + ft_putnbr_un(n / 10, i);
		ft_putnbr_un(n % 10, i);
	}
	else
	{
		i = i + ft_putchar(n + '0');
	}
	return (i);
}

int	ft_sign(int n)
{
	if (n < 0)
		n = -n;
	return (ft_putnbr_un((unsigned int)n, 0));
}