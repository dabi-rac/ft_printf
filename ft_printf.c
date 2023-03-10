/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:10:10 by dabi-rac          #+#    #+#             */
/*   Updated: 2023/02/16 16:07:08 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char c, va_list arg, int *count)
{
	if (c == 'c')
		ft_putchar((char) va_arg(arg, int), count);
	else if (c == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (c == 'p')
		ft_pointer(va_arg(arg, unsigned long), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(arg, int), count);
	else if (c == 'u')
		ft_putnbr_u(va_arg(arg, unsigned int), count);
	else if (c == 'x')
		ft_hexlower(va_arg(arg, unsigned int), count);
	else if (c == 'X')
		ft_hexupper(va_arg(arg, unsigned int), count);
	else if (c == '%')
		ft_putchar('%', count);
	else
		ft_putchar(c, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == 37)
			ft_check(str[++i], arg, &count);
		else
			ft_putchar(str[i], &count);
		i++;
	}
	return (count);
	va_end(arg);
}
