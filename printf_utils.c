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

void	ft_putnbr_base(int num, char *base, int *count)
{
	int	index;
	size_t	len;

	index = 0;
	len = ft_strlen(base);
	if (num < 0 && len == 10)
	{
		if (num == -2147483648)//INT_MIN
		{
			write(1, "-2147483648", 11);
			(*count) += 11;
			return ;
		}
		ft_putchar('-', count);
		num *= -1;
	}
	if (len == 10)
	{
		if (num > 9)
		{
			ft_putnbr_base(num / 10, "0123456789", count);
			ft_putchar((num / 10) + '0', count);
		}
		ft_putchar((num / 10) + '0', count);
	}
	if (len == 16)
	{
		if (num > 15)
		{
			ft_putnbr_base(num / 16, "0123456789ABCDEF", count);
			ft_putchar((num / 16) + '0', count);
		}
		ft_putchar((num / 16) + '0', count);
	}
}
