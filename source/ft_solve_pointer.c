/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:06:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/20 22:10:45 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			*ft_utoa_hex_p(unsigned long long int num)
{
	char					*str;
	unsigned int			len;
	unsigned long long int	param;

	len = 1;
	param = num;
	while (param >= 16)
	{
		param /= 16;
		len++;
	}
	len += 2;
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[0] = '0';
	str[1] = 'x';
	str[len] = '\0';
	while (len > 2)
	{
		param = num % 16;
		str[--len] = param < 10 ? param + 48 : param % 10 + 'a';
		num /= 16;
	}
	return (str);
}

void	ft_solve_pointer(t_info *info)
{
	char		*addr;

	addr = ft_utoa_hex_p((unsigned long long)va_arg(info->arguments, void *));
	
	if (info->width < ((int)ft_strlen(addr) - 2))
		info->width = 0;
	ft_putstr("0x");
	//ft_putnchar('0', p);
	info->format++;
}