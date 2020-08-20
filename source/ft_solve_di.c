/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:09:25 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/19 17:28:44 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	di_width(t_info *info, long long nbr, int nbrlen, int diff)
{
	if (info->flag[e_zero] == '1' && diff == 0)
	{
		if (info->point != 0)
			while (--info->width > nbrlen)
				ft_putchar(' ');
		if (nbr < 0)
			ft_putchar('-');
		if(info->point == 0)
			while (--info->width > nbrlen)
				ft_putchar('0');
	}
	else
	{
		while (--info->width > (nbrlen + diff))
			ft_putchar(' ');
		if (nbr < 0)
			ft_putchar('-');
	}
	ft_putnchar('0', diff);
	if (info->point != 1 || nbr != 0)
		ft_putnbr(nbr);
}

static	void	di_handle_flag(t_info *info, int nbr, int nbrlen, int diff)
{
	if (info->flag[e_minus] == '1')
	{
		if (nbr < 0)
			ft_putchar('-');
		ft_putnchar('0', diff);
		if (info->point != 1 || nbr != 0)
			ft_putnbr(nbr);
		if (info->width > nbrlen)
			while (--info->width > nbrlen + diff)
				ft_putchar(' ');
	}
	else
	{
		if(info->width > nbrlen)
			di_width(info, nbr, nbrlen, diff);
		else
		{
			if (nbr < 0)
				ft_putchar('-');
			ft_putnchar('0', diff);
			if (info->point != 1 || nbr != 0)
				ft_putnbr(nbr);
		}
	}
}
void	ft_solve_di(t_info *info)
{
	long long nbr;
	int	nbrlen;
	int diff;

	nbr = (int)(va_arg(info->arguments, long long));
	diff = info->precision - ft_nbrlen(nbr);
	nbrlen =  ft_nbrlen(nbr);
	if (info->point == 1 && nbr == 0)
		nbrlen--;
	if (nbr < 0)
		nbrlen++;
	if (diff < 0)
		diff  = 0;
	if (info->width <= info->precision)
		info->total_length = info->total_length + diff;
	if (info->width > nbrlen && info->width > info->precision)
	{
		info->total_length = info->total_length + (info->width - nbrlen);
		info->width++;
	}
	di_handle_flag(info, nbr, nbrlen, diff);
	info->total_length = info->total_length + nbrlen;
	info->format++;
}