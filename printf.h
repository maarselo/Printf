/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:56:16 by mvillavi          #+#    #+#             */
/*   Updated: 2025/01/30 07:18:35 by mvillavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr_base(int num, char *base, int type, int *count);

#endif
