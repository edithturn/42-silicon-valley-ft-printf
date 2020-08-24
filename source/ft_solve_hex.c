/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:56:20 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			h_itoa_hex(unsigned long long n, char format)
{
	if (n > 15)
	{
		h_itoa_hex(n / 16, format);
		h_itoa_hex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
			format == 'x' ? ft_putchar(n - 10 + 'a') : ft_putchar(n - 10 + 'A');
	}
}

static void		x_flag(t_info *info, unsigned long long n, int ln, int df)
{
	info->width++;
	if (info->flag[e_minus] == '1')
	{
		ft_putnchar('0', df);
		if (info->point != 1 || n != 0)
			h_itoa_hex(n, *info->format);
		if (info->width > ln)
			while (--info->width > ln + df)
				ft_putchar(' ');
	}
	else
	{
		if (info->width > ln && (info->flag[e_zero] != '1' || info->point != 0))
			while (--info->width > ln + df)
				ft_putchar(' ');
		if (info->width > ln && info->flag[e_zero] == '1' && info->point == 0)
			while (--info->width > ln + df)
				ft_putchar('0');
		ft_putnchar('0', df);
		if (info->point != 1 || n != 0)
			h_itoa_hex(n, *info->format);
	}
}

void			ft_solve_hex(t_info *info)
{
	unsigned long long	nbr;
	unsigned long long	tmp;
	int					nbrlen;
	int					diff;

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
	if (diff < 0)
		diff = 0;
	if (info->width <= info->precision)
		info->total_length = info->total_length + diff;
	if (info->width > nbrlen && info->width > info->precision)
		info->total_length = info->total_length + (info->width - nbrlen);
	x_flag(info, nbr, nbrlen, diff);
	info->total_length = info->total_length + nbrlen;
	info->format++;
}
