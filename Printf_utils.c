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

#include "Printf.h"

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
	while (s[i])
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

void	ft_putptr(uintptr_t num, int *count)
{
	if (num == 0)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_putnbr_base(num, "0123456789abcdef", count);
}
