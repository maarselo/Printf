/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:09:15 by mvillavi          #+#    #+#             */
/*   Updated: 2025/02/26 18:09:35 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *s, int *count)
{
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (*s)
		ft_putchar(*s++, count);
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

void	ft_putnbr_ulbase(unsigned long num, char *base, int *count)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (num >= (unsigned long)base_len)
		ft_putnbr_base(num / (unsigned long)base_len, base, count);
	ft_putchar(base[num % base_len], count);
}

void	ft_putptr(void *ptr, int *count)
{
	if (!ptr)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_putnbr_ulbase((unsigned long)ptr, "0123456789abcdef", count);
}
