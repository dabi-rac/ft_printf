/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:09:23 by dabi-rac          #+#    #+#             */
/*   Updated: 2023/02/16 16:06:56 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexupper(unsigned int nb, int *count)
{
	char	*str;
	char	*hex;
	int		i;

	hex = "0123456789ABCDEF";
	str = (char *) malloc((ft_len(nb) + 1) * sizeof(char));
	if (!str)
		return ;
	i = ft_len(nb);
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
