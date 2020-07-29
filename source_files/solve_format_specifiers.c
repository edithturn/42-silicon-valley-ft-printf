/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_format_specifiers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 01:31:50 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/28 23:57:49 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

t_info *solve_character(t_info *info)
{
	char	c;

	c = va_arg(info->ap, int);

	//if(flag[minus] == 1)

	//send context in a structure
	ft_putchar(c);
	info->format++;
	return (info);
}

t_info *solve_string(t_info *info)
{
	char	*str;
	char	ptr;
	char	*tmp;
	char	space = ' ';
	int i;
	int	strlen;
	
	strlen = 0;
	tmp = va_arg(info->ap, char *);
	
	str = ft_strnew(info->precision);
	ft_strncpy(str, tmp,info->precision);
	
	if (info->flag[e_minus]== '1' && info->point == 1)
		ft_putstr(str);
	strlen = ft_strlen(str);
	if (info->width > strlen)
	{
		while (info->width >strlen)
		{
			ft_putchar(' ');
			info->width--;
		}
	}
	info->format++;
	return (info);
}

t_info *solve_pointer(t_info *info)
{
	unsigned	long	long	p;

	p = (unsigned long long)va_arg(info->ap, void *);
	//convert p to hexadecimal
	// Transform each byte from addr in hexadecimal
	ft_putstr("0x");
	//ft_putnchar('0', p);

	info->format++;
	return (info);
}

t_info *solve_decimal_integer(t_info *info)
{
	char  *n;
	n = ft_itoa(va_arg(info->ap, long long));
	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
	return (info);
}

t_info *solve_unsigned_decimal_integer(t_info *info)
{
	char  *n;
	n = ft_itoa(va_arg(info->ap, long long));
	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
	return (info);
}

t_info *solve_unsigned_hexadecimal_integer(t_info *info)
{
	// aplicar contexto
	char  *n;
	n = ft_itoa(va_arg(info->ap, long long));

	while(*n)
	{
		ft_putchar(*n);
		n++;
	}
	info->format++;
	return (info);
}

t_info *solve_percent_sign(t_info *info)
{
	char	per;
	per = '%';
	ft_putchar(per);
	info->format++;
	return (info);
	
}