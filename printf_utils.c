/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:09:15 by mvillavi          #+#    #+#             */
/*   Updated: 2025/01/28 18:57:12 by mvillavi         ###   ########.fr       */
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
