/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:20:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:56:41 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			s_handle_width(t_info *info, int strlen)
{
	if (info->width > strlen)
	{
		info->total_length = info->total_length + (info->width - strlen);
		while (info->width > strlen)
		{
			ft_putchar(' ');
			info->width--;
		}
	}
}

static	void	s_handle_string(t_info *info, char *str, int strlen)
{
	if (info->flag[e_minus] == '1' && info->point != 1)
		ft_putstr(str);
	s_handle_width(info, strlen);
	if (info->flag[e_minus] != '1' && info->point != 1)
		ft_putstr(str);
	info->total_length = info->total_length + strlen;
	info->format++;
	free(str);
}

void			ft_solve_string(t_info *info)
{
	char	*str;
	char	*tmp;
	int		strlen;

	tmp = va_arg(info->arguments, char *);
	if (tmp == NULL)
		tmp = "(null)";
	if (info->precision == 0)
	{
		str = ft_strnew(ft_strlen(tmp));
		ft_strcpy(str, tmp);
	}
	else
	{
		if (!IS_MACOS && (info->precision < 6 && info->precision >= 0)
		&& (ft_strcmp(tmp, "(null)") == 0))
			info->precision = 0;
		str = ft_strnew(info->precision);
		ft_strncpy(str, tmp, info->precision);
	}
	if (info->point != 1)
		strlen = ft_strlen(str);
	else
		strlen = 0;
	s_handle_string(info, str, strlen);
}
