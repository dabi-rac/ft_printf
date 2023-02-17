/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:09:43 by dabi-rac          #+#    #+#             */
/*   Updated: 2023/02/16 16:07:01 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_u(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

void	ft_pointer(unsigned long nb, int *count)
{
	char	*str;
	char	*hex;
	int		i;

	ft_putstr("0x", count);
	hex = "0123456789abcdef";
	str = (char *) malloc((ft_len_u(nb) + 1) * sizeof(char));
	if (!str)
		return ;
	i = ft_len_u(nb);
	str[i] = '\0';
	i--;
	if (nb == 0)
		str[0] = '0';
	while (nb != 0)
	{
		str[i] = hex[nb % 16];
		nb = nb / 16;
		i--;
	}
	ft_putstr(str, count);
	free(str);
}
