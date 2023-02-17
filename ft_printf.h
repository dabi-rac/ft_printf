/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:10:24 by dabi-rac          #+#    #+#             */
/*   Updated: 2023/02/16 16:07:12 by dabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_hexlower(unsigned int nb, int *count);
void	ft_hexupper(unsigned int nb, int *count);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putnbr_u(unsigned int nb, int *count);
void	ft_pointer(unsigned long nb, int *count);
void	ft_check(char c, va_list arg, int *count);
int		ft_len_u(unsigned long n);
int		ft_len(unsigned int n);
int		ft_strlen(char *str);

#endif
