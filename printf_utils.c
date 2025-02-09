/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:09:15 by mvillavi          #+#    #+#             */
/*   Updated: 2025/01/30 07:19:22 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *s, int *count)
{
	while (*s)
		ft_putchar(*s++, count);
}

size_t	ft_strlen(char *s)
{
	int	i; 

	i = 0;
	while(s[i])
		i++;
	return (i);
}

void	ft_putnbr_base(long num, char *base, int *count)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len == 10 && num < 0)
	{
		ft_putchar('-', count);
		num *= -1;
	}
	if (num >= base_len)
		ft_putnbr_base(num / base_len, base, count);
	ft_putchar(base[num % base_len], count);
}

/*
void	ft_putnbr_base(int num, int base, char *hexa, int *count)
{
	if (num < 0 && base == 10)
	{
		ft_putchar('-', count);
		num *= -1;
	}
	if (base == 10)
	{
		if (num > 9)
		{
			ft_putnbr_base(num / 10, base , NULL, count);
			ft_putchar((num % 10) + '0', count);
		}
		if (num < 10)
			ft_putchar((num % 10) + '0', count);
	}
	else if (base == 16)
	{
		if (num > 15)
		{
			ft_putnbr_base(hexa[num / 16], base, hexa, count);
			ft_putchar((num % 16) + '0', count);
		}
		if (num < 16)
			ft_putchar((num % 16) + '0', count);
	}
}*/
