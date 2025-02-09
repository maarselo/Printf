/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:47:40 by mvillavi          #+#    #+#             */
/*   Updated: 2025/01/30 05:26:18 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

void	ft_format(char const *s, va_list va, int *count)
{
	if (*s == '%')
		ft_putchar('%', count);
	else if (*s == 'c')
		ft_putchar(va_arg(va, int), count);
	else if (*s == 's')
		ft_putstr(va_arg(va, char *), count);
	else if (*s == 'p')
		printf("Haciendo");//
	else if (*s == 'd' || *s  == 'i')
		ft_putnbr_base((long)va_arg(va, int), "0123456789", count);
	else if (*s == 'X' || *s  == 'x')
	{
		if (*s == 'X')
			ft_putnbr_base(va_arg(va, unsigned int), "0123456789ABCDEF", count);
		else
			ft_putnbr_base(va_arg(va, unsigned int), "0123456789abcdef", count);
	}
}

int	ft_printf(char const *s, ...)
{
	va_list	va;
	int	count;	

	if (!s)
		return (0);
	va_start(va, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
			ft_format(++s, va, &count);
		else
			ft_putchar(*s, &count);
		s++;
	}
	return (count);
}

int	main(void)
{
	//int	numdeci = -2147483649;
	//int	numhexa = 65535;
	int	total = ft_printf("%X\n", -21474646366436);
	printf("%d", total);
}
