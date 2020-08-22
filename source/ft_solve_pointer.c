/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:06:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/22 15:49:10 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	p_write_hex(unsigned	long	long	num )
{
		if (num > 15)
		{
			p_write_hex(num / 16);
			p_write_hex(num % 16);
		}
		else
		{
				if (num <= 9)
					ft_putchar(num + '0');
				else
					ft_putchar(num - 10 + 'a');
			
		}
}

static	void	p_handle_width(t_info *info, int addrlen, int diff)
{
	if (info->width > addrlen && info->width > info->precision)
	{
		info->total_length = info->total_length + info->width - addrlen;
		info->width++;
		if (info->flag[e_zero] == '1' && info->flag[e_minus] != '1' && diff != 0)
			while (--info->width > addrlen)
				ft_putchar('0');
		else
			while (--info->width > addrlen + diff)
				ft_putchar(' ');
	}
}
static	void handle_pointer (t_info *info, unsigned long long addr, int addrlen, int diff)
{
	if (info->flag[e_minus] == '1' || (info->flag[e_zero] == '1' && diff == 0))
	{
			ft_putstr("0x");
			ft_putnchar('0', diff);
	}
	if (info->flag[e_minus] == '1' && (addr != 0 || info->point != 1))
		p_write_hex(addr);
	p_handle_width(info, addrlen, diff);
	if (info->flag[e_minus] != '1' && (info->flag[e_zero] != '1' || diff != 0))
	{
		if (!IS_MACOS && (addr == 0 ) )
			ft_putstr("(nil)");
		else 
		{
			ft_putstr("0x");
			ft_putnchar('0', diff);
		}
	}
	if (info->flag[e_minus] != '1' && (addr != 0 && info->point != 1))
		p_write_hex(addr);
}

void	ft_solve_pointer(t_info *info)
{
	unsigned	long	long 	addr;
	unsigned	long	long tmp;
	int	addrlen;
	int diff;

	addr = (unsigned long long)va_arg(info->arguments, void *);
	if (addr > 0)
		addrlen = 2;
	tmp  = addr;
	if (tmp == 0 && info->point != 1)
		addrlen++;

	while (tmp > 0)
	{
		addrlen++;
		tmp /= 16;
	}
	diff = info->precision - addrlen + 2 ;
	if (diff < 0 )
		diff = 0;
	if (info->width <= info->precision && info != 0)
		info->total_length = info->total_length + diff;
	handle_pointer(info, addr, addrlen, diff );
	info->total_length = info->total_length + addrlen;
	info->format++;
}