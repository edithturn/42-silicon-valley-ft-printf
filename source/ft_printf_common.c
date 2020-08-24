/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_common.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 23:49:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:56:02 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_select_format_specifier(t_info *info)
{
	int					number;

	number = 0;
	if (*info->format == 'c')
		number = e_char;
	else if (*info->format == 's')
		number = e_string;
	else if (*info->format == 'p')
		number = e_pointer;
	else if (*info->format == 'd' || *info->format == 'i')
		number = e_decimal_int;
	else if (*info->format == 'u')
		number = e_u_dec_int;
	else if (*info->format == 'x' || *info->format == 'X')
		number = e_u_hex_int;
	else if (*info->format == '%')
		number = e_percentage;
	else
		ft_putstr_fd("[ERROR]->", 1);
	return (number);
}

int		ft_handle_length(t_info *info, int addr, int addrlen)
{
	if (IS_MACOS)
	{
		if (addr == 0 && info->point != 1)
			addrlen++;
	}
	else
	{
		if (addr == 0 && info->point != 1)
			addrlen = addrlen + 3;
	}
	return (addrlen);
}
