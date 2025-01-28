/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:47:40 by mvillavi          #+#    #+#             */
/*   Updated: 2025/01/28 18:56:57 by mvillavi         ###   ########.fr       */
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
	char	*c = "Hola";
	int	num = ft_printf("%s", c);
	printf("\n%d", num);
}
