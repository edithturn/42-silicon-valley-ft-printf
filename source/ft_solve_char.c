/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:05:50 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/19 13:03:35 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_handle_width(t_info *info)
{
	if (info->width > 1)
	{
		info->total_length = info->total_length + (info->width - 1);
		while (info->width > 1)
		{
			ft_putchar(' ');
			info->width--;
		}
	}
}
void	ft_solve_char(t_info *info)
{
	char	c;

	c = va_arg(info->arguments, int);
	if (info->flag[e_minus] == '1')
		ft_putchar(c);
	c_handle_width(info);
	if (info->flag[e_minus] != '1')
		ft_putchar(c);
	info->total_length++; 
	info->format++;
}
