/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smillan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:20:15 by smillan-          #+#    #+#             */
/*   Updated: 2024/10/21 11:20:18 by smillan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n, int i);
int	ft_puthex(unsigned int n, int i, char x);
static int	ft_putnbr_un(unsigned int n, int i);
int	ft_sign(int n);
int	ft_point(void * n);
static int	ft_puthex_long(unsigned long long n, int i);

#endif
