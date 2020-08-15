/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:20:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/14 20:33:16 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_solve_string(t_info *info)
{
	char	*str;
	char	*tmp;
	int	strlen;

	strlen = 0;
	tmp = va_arg(info->arguments, char *);
	
	str = ft_strnew(info->precision);

	ft_strncpy(str, tmp,info->precision);
	
	strlen = ft_strlen(str);
	if (info->flag[e_minus] == '1')
		ft_putstr(str);
	else
	{
		strlen = ft_strlen(tmp);
		while (info->width > strlen)
		{
			ft_putchar(' ');
			info->width--;
		}
		ft_putstr(tmp);
	}

	if (info->width > strlen)
	{
		while (info->width >strlen)
		{
			ft_putchar(' ');
			info->width--;
		}
	}
	
	info->format++;
}