/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:47:40 by mvillavi          #+#    #+#             */
/*   Updated: 2025/02/26 19:31:47 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Printf.h"

void	ft_format(char const *s, va_list va, int *count)
{
	if (*s == '%')
		ft_putchar('%', count);
	else if (*s == 'c')
		ft_putchar(va_arg(va, int), count);
	else if (*s == 's')
		ft_putstr(va_arg(va, char *), count);
	else if (*s == 'd' || *s == 'i')
		ft_putnbr_base((long)va_arg(va, int), "0123456789", count);
	else if (*s == 'u')
		ft_putnbr_base(va_arg(va, unsigned int), "0123456789", count);
	else if (*s == 'X' || *s == 'x')
	{
		if (*s == 'X')
			ft_putnbr_base(va_arg(va, unsigned int), "0123456789ABCDEF", count);
		else
			ft_putnbr_base(va_arg(va, unsigned int), "0123456789abcdef", count);
	}
	else if (*s == 'p')
		ft_putptr(va_arg(va, void *), count);
}

int	ft_printf(char const *s, ...)
{
	va_list	va;
	int		count;

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
	va_end(va);
	return (count);
}

/*
#include <stdio.h>
int	main(void)
{
	ft_printf("%%\n");
	ft_printf("%c\n", 'h');
	ft_printf("hola %s\n", "como estas");
	ft_printf("num: %d\n", 134242);
	ft_printf("numu: %u\n", 134242);
	ft_printf("numi: %i\n", 134242);
	ft_printf("hex: %x\n", 424242);
	ft_printf("HEX: %X\n", 424242);
	ft_printf("point: %p\n", (void *)424242);
	ft_printf("__________________________________\n");
	printf("%%\n");
	printf("%c\n", 'h');
	printf("hola %s\n", "como estas");
	printf("num: %d\n", 134242);
	printf("numu: %u\n", 134242);
	printf("numi: %i\n", 134242);
	printf("hex: %x\n", 424242);
	printf("HEX: %X\n", 424242);
	printf("point: %p\n", (void *)424242);
	return (0);
}*/
