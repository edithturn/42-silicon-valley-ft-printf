/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:31:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/23 22:48:57 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_eval_input(t_info *info)
{
	int					number;

	info->format++;
	number = 0;
	ft_eval_flag(info);
	ft_eval_width(info);
	ft_eval_precision(info);
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
	ft_dispatcher(info, number);
}
