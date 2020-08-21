/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/20 22:07:59 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	x_handle_length(t_info *info, unsigned long long int nbr)
{
	int	nbrlen;

	nbrlen = 0;
	if (nbr == 0 && info->point != 1)
		nbrlen++;
	while (nbr > 0)
	{
		nbrlen++;
		nbr = nbr / 16;
	}
	return nbrlen;
	
}

void	ft_write_hexadecimal(unsigned long long nbr, char format)
{
	if (nbr > 15)
	{
		ft_write_hexadecimal(nbr / 16, format);
		ft_write_hexadecimal(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
			format == 'x' ? ft_putchar(nbr - 10 + 'a') : ft_putchar(nbr - 10 + 'A');
	}
}

static void		x_handle_flag(t_info *info, unsigned long long nbr, int nbrlen, int diff)
{
	if (info->flag[e_minus] == '1')
	{
		ft_putnchar('0', diff);
		if (info->point != 1 || nbr != 0)
			ft_write_hexadecimal(nbr, *info->format);
		if (info->width > nbrlen)
			while (--info->width > nbrlen + diff)
				ft_putchar(' ');
	}
	else {
		if (info->width > nbrlen && (info->flag[e_zero] != '1' || info->point != 0))
			while (--info->width > nbrlen + diff)
				ft_putchar(' ');
		if (info->width > nbrlen && info->flag[e_zero] == '1' && info->point == 0)
			while (--info->width > nbrlen + diff)
				ft_putchar('0');
		ft_putnchar('0', diff);
		if (info->point != 1 || nbr != 0)
			ft_write_hexadecimal(nbr, *info->format);
	}
}

void	ft_solve_hex(t_info *info)
{
	unsigned long long	nbr;
	int			nbrlen;
	int diff;

	nbr = (unsigned int)(va_arg(info->arguments, unsigned long long));
	nbrlen = x_handle_length(info, nbr);
	diff = info->precision - nbrlen;
	if(diff < 0)
		diff = 0;
	if (info->width <= info->precision)
		info->total_length = info->total_length + diff;
	if (info->width > nbrlen && info->width > info->precision)
	{
		info->total_length = info->total_length + (info->width - nbrlen);
		info->width++;
	}
	x_handle_flag(info, nbr, nbrlen, diff);
	info->total_length = info->total_length + nbrlen;
	info->format++;
}