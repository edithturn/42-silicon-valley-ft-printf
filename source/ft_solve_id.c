/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:09:25 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/17 01:05:18 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	id_handle_length(t_info *info, long long nbr)
{
	int nbrlen;

	nbrlen =  ft_nbrlen(nbr);
	if (info->point == 1 && nbr == 0)
		nbrlen--;
	if (nbr < 0)
		nbrlen++;
	return (nbrlen);
}

static	void	id_handle_minus(t_info *info, long long nbr, int nbrlen, int diff)
{
	if (nbr < 0)
		ft_putchar(' ');
	ft_putnchar('0', diff);
	if (info->point != 1 || nbr != 0)
		ft_putnbr(nbr);
	if (info->width > nbrlen)
		while (--info->width > nbrlen + diff)
			ft_putchar(' ');
}

static	void	id_handle_nominus(t_info *info, long long nbr, int nbrlen, int diff)
{
	if(info->width > nbrlen)
		id_width(info, nbr, nbrlen, diff);
	else
	{
		if (nbr < 0)
			ft_putchar('-');
		ft_putnchar('0', diff);
		if (info->point != 1 || nbr != 0)
			ft_putnbr(nbr);
	}
}

void	ft_solve_id(t_info *info)
{
	long long nbr;
	int	nbrlen;
	int diff;

	nbr = (int)(va_arg(info->arguments, long long));
	nbrlen = id_handle_length(info, nbr);
	diff = info->precision - ft_nbrlen(nbr);
	if (diff < 0)
		diff  = 0;
	if (info->width <= info->precision)
		info->total_length = info->total_length + diff;
	if (info->width > nbrlen && info->width > info->precision)
	{
		info->total_length = info->total_length + (info->width - nbrlen);
		info->width++;
	}
	if (info->flag[e_minus] == '1')
		id_handle_minus(info, nbr, nbrlen, diff);
	else
		id_handle_nominus(info, nbr, nbrlen, diff);

	info->total_length = info->total_length + nbrlen;
	info->format++;
	info->signal = 1;
}