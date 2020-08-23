/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:10:02 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/23 07:40:54 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	u_itoa_hex(unsigned long long nbr)
{
	if (nbr > 9)
	{
		u_itoa_hex(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
}

static	void	u_handle_width(t_info *info, unsigned long long nbr, int numlen, int diff)
{
	if (info->flag[e_zero] == '1' && (info->flag[e_minus] != 1 && diff == 0))
	{
		if (info->point != 0)
			while (--info->width > numlen)
				ft_putchar(' ');
		else
			while (--info->width > numlen)
				ft_putchar('0');
	}
	else
	{
		if(info->point != 1 || nbr != 0)
			while (--info->width > numlen + diff)
				ft_putchar(' ');
		else
			while(--info->width > 0)
				ft_putchar(' ');
	}
}

static	void	u_handle_uint(t_info *info, unsigned	long long nbr, int numlen, int diff)
{
	if(info->flag[e_minus] == '1' && (info->point != 1 || nbr != 0))
	{
		ft_putnchar('0', diff);
		u_itoa_hex(nbr);
	}
	if (info->width > numlen)
	{
		info->width++;
		u_handle_width(info, nbr, numlen, diff);
	}
	if (info->flag[e_minus] != '1' && (info->point != 1 || nbr != 0))
	{
		ft_putnchar('0', diff);
		u_itoa_hex(nbr);
	}
}
void	ft_solve_uint(t_info *info)
{
	unsigned	long long nbr;
	unsigned	long long tmp;
	int	nbrlen;
	int	diff;

	nbrlen = 0;
	nbr = (unsigned int)(va_arg(info->arguments, long long));
	tmp  = nbr;
	if (tmp == 0 && info->point != 1)
		nbrlen++;
	while (tmp > 0)
	{
		nbrlen++;
		tmp /= 10;
	}
	diff =  info->precision - nbrlen;
	if(diff < 0)
		diff = 0;
	if (info->width <= info->precision)
		info->total_length = info->total_length + diff;
	if (info->width > nbrlen && info->width > info-> precision)
		info->total_length = info->total_length + (info->width - nbrlen);
	u_handle_uint(info, nbr, nbrlen, diff);
	info->total_length = info->total_length + nbrlen;
	info->format++;
}