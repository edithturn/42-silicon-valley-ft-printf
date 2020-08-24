/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:06:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:56:33 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static	void	p_itoa_hex(unsigned	long	long nbr)
{
	if (nbr > 15)
	{
		p_itoa_hex(nbr / 16);
		p_itoa_hex(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
			ft_putchar(nbr - 10 + 'a');
	}
}

static	void	p_handle_width(t_info *info, int addrlen, int diff)
{
	if (info->width > addrlen && info->width > info->precision)
	{
		info->total_length = info->total_length + info->width - addrlen;
		info->width++;
		if (info->flag[e_zero] == '1' && info->flag[e_minus]
		!= '1' && diff != 0)
			while (--info->width > addrlen)
				ft_putchar('0');
		else
			while (--info->width > addrlen + diff)
				ft_putchar(' ');
	}
}

static	void	handle_p(t_info *info, unsigned long long ad, int adl, int diff)
{
	if (info->flag[e_minus] == '1' || (info->flag[e_zero] == '1' && diff == 0))
	{
		ft_putstr("0x");
		ft_putnchar('0', diff);
	}
	if (info->flag[e_minus] == '1' && (ad != 0 || info->point != 1))
		p_itoa_hex(ad);
	if (!IS_MACOS && ad > 0)
		p_handle_width(info, adl, diff);
	if (IS_MACOS)
		p_handle_width(info, adl, diff);
	if (info->flag[e_minus] != '1' && (info->flag[e_zero] != '1' || diff != 0))
	{
		if (!IS_MACOS && ad == 0)
			ft_putstr("(nil)");
		else
		{
			ft_putstr("0x");
			if (IS_MACOS && ad == 0)
				diff = 1;
			ft_putnchar('0', diff);
		}
	}
	if (info->flag[e_minus] != '1' && (ad != 0 && info->point != 1))
		p_itoa_hex(ad);
}

void			ft_solve_pointer(t_info *info)
{
	unsigned long long	addr;
	unsigned long long	tmp;
	int					addrlen;
	int					diff;

	addr = (unsigned long long)va_arg(info->arguments, void *);
	addrlen = 2;
	addrlen = ft_handle_length(info, addr, addrlen);
	tmp = addr;
	while (tmp > 0)
	{
		addrlen++;
		tmp /= 16;
	}
	diff = info->precision - addrlen + 2;
	if (diff < 0)
		diff = 0;
	if (info->width <= info->precision && diff != 0)
		info->total_length = info->total_length + diff;
	handle_p(info, addr, addrlen, diff);
	info->total_length = info->total_length + addrlen;
	info->format++;
}
