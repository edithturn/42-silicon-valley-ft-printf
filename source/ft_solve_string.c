/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:20:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/19 10:33:15 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	s_handle_width(t_info *info, int strlen)
{
	if (info->width > strlen)
	{
		info->total_length = info->total_length + (info->width - strlen);
		if (info->flag[e_zero] == '1' && info->flag[e_minus] != '1')
		{
			while(info->width > strlen)
			{
				ft_putchar('0');
				info->width--;
			}
		}
		else
		{
			while (info->width > strlen)
			{
				ft_putchar(' ');
				info->width--;
			}
		}
	}
}
static	void	s_handle_string(t_info *info, char *str, char *tmp, int strlen)
{
	if (info->flag[e_minus] == '1' && info->point != 1)
		ft_putstr(str);
	s_handle_width(info, strlen);
	if (info->flag[e_minus] != '1' && info->point != 1)
		ft_putstr(str);
	info->total_length = info->total_length + strlen;
	info->format++;
	info->signal = 1;
	free(str);
	if (ft_strcmp(tmp, "(null)") == 0)
		free(tmp);
}

void	ft_solve_string(t_info *info)
{
	char	*str;
	char	*tmp;
	int			strlen;

	tmp = va_arg(info->arguments, char *);
	if (tmp == NULL)
	{
		tmp = ft_strnew(6);
		ft_strcpy(tmp, "(null)");
	}
	if(info->precision == 0)
	{
		str = ft_strnew(ft_strlen(tmp));
		ft_strcpy(str, tmp);
	}
	else
	{
		if((info->precision < 6 && info->precision >= 0)  && (ft_strcmp(tmp, "(null)") == 0))
		{
			info->precision= 0;
		}
		str = ft_strnew(info->precision);
		ft_strncpy(str, tmp, info->precision);
	}
	if (info->point != 1) //precision == 0 or precision == 2
		strlen = ft_strlen(str);
	else
		strlen = 0;
	s_handle_string(info, str, tmp, strlen);
}