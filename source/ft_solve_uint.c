/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:02 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:56:48 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			u_itoa_hex(unsigned long long nbr)
{
	if (nbr > 9)
	{
		u_itoa_hex(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
}

static void		u_handle_wdt(t_info *info, unsigned long long n, int nl, int df)
{
	if (info->flag[e_zero] == '1' && (info->flag[e_minus] != 1 && df == 0))
	{
		if (info->point != 0)
			while (--info->width > nl)
				ft_putchar(' ');
		else
			while (--info->width > nl)
				ft_putchar('0');
	}
	else
	{
		if (info->point != 1 || n != 0)
			while (--info->width > nl + df)
				ft_putchar(' ');
		else
			while (--info->width > 0)
				ft_putchar(' ');
	}
}

static void		handle_u(t_info *info, unsigned long long n, int nl, int df)
{
	if (info->flag[e_minus] == '1' && (info->point != 1 || n != 0))
	{
		ft_putnchar('0', df);
		u_itoa_hex(n);
	}
	if (info->width > nl)
	{
		info->width++;
		u_handle_wdt(info, n, nl, df);
	}
	if (info->flag[e_minus] != '1' && (info->point != 1 || n != 0))
	{
		ft_putnchar('0', df);
		u_itoa_hex(n);
	}
}

void			ft_solve_uint(t_info *info)
{
	unsigned long long	nbr;
	unsigned long long	tmp;
	int					nbrlen;
	int					diff;

	nbrlen = 0;
	nbr = (unsigned int)(va_arg(info->arguments, long long));
	tmp = nbr;
	if (tmp == 0 && info->point != 1)
		nbrlen++;
	while (tmp > 0)
	{
		nbrlen++;
		tmp /= 10;
	}
	diff = info->precision - nbrlen;
	if (diff < 0)
		diff = 0;
	if (info->width <= info->precision)
		info->total_length = info->total_length + diff;
	if (info->width > nbrlen && info->width > info->precision)
		info->total_length = info->total_length + (info->width - nbrlen);
	handle_u(info, nbr, nbrlen, diff);
	info->total_length = info->total_length + nbrlen;
	info->format++;
}
