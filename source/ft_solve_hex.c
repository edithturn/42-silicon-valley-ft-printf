/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/23 07:25:08 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	h_itoa_hex(unsigned long long nbr, char format)
{
	if (nbr > 15)
	{
		h_itoa_hex(nbr / 16, format);
		h_itoa_hex(nbr % 16, format);
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
	info->width++;
	if (info->flag[e_minus] == '1')
	{
		ft_putnchar('0', diff);
		if (info->point != 1 || nbr != 0)
			h_itoa_hex(nbr, *info->format);
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
			h_itoa_hex(nbr, *info->format);
	}
}

void	ft_solve_hex(t_info *info)
{
	unsigned long long	nbr;
	unsigned long long	tmp;
	int			nbrlen;
	int diff;

	nbr = (unsigned int)(va_arg(info->arguments, unsigned long long));
	tmp = nbr;
	nbrlen = 0;
	if (tmp == 0 && info->point != 1)
		nbrlen++;
	while (tmp > 0)
	{
		nbrlen++;
		tmp = tmp / 16;
	}
	diff = info->precision - nbrlen;
	if(diff < 0)
		diff = 0;
	if (info->width <= info->precision)
		info->total_length = info->total_length + diff;
	if (info->width > nbrlen && info->width > info->precision)
		info->total_length = info->total_length + (info->width - nbrlen);	
	x_handle_flag(info, nbr, nbrlen, diff);
	info->total_length = info->total_length + nbrlen;
	info->format++;
}