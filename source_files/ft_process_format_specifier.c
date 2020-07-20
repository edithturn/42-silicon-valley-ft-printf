/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_format_specifier.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 01:31:50 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/19 18:22:35 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

t_info *process_string(t_info *info)
{
	char	*str;

	str = va_arg(info->ap, char *);
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
	info->format++;
	return (info);
}

t_info *process_character(t_info *info)
{
	char	c;

	c = va_arg(info->ap, int);
	ft_putchar(c);
	info->format++;
	return (info);
}

t_info *pointer_void(t_info *info)
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

t_info *process_unsigned_int(t_info *info)
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

t_info *process_decinal_integer(t_info *info)
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

t_info *process_unsigned_hex_integer_lowecase(t_info *info)
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

t_info *process_unsigned_hex_integer_uppercase(t_info *info)
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

t_info *process_percent_sign(t_info *info)
{
	char	per;
	per = '%';
	ft_putchar(per);
	info->format++;
	return (info);
	
}




// 1 valor de lista -> "Eddie "
// 2 ->  "5988"
// 3 -> " something"
// Printf("Eddie %-14.d something", 5988)
// Eddie
// 5988
// something