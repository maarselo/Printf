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
		ft_putptr(va_arg(va, uintptr_t), count);
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
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*ptr = NULL;

	int	total = ft_printf("%p\n", ptr);

	printf("Original :%p\nTotal chars: %d",ptr, total);
}*/
