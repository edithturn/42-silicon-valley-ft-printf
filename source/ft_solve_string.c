/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:20:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/17 11:21:17 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_handle_string(t_info *info, char *str, char *temp, int strlen)
{
	if (info->flag[e_minus] == '1' && info->point != 1)
		ft_putstr(str);
	if (info->width > strlen)
	{
		info->total_length = info->total_length + (info->width - strlen);
		info->format++;
		if (info->flag[e_zero] == '1' && info->flag[e_minus] != '1')
			while(--info->width > strlen)
				ft_putchar('0');
		else
			while (info->width > strlen)
				ft_putchar(' ');
	}
	if (info->flag[e_minus] != '1' && info->point != 1)
		ft_putchar(' ');
	info->total_length = info->total_length + strlen;
	info->format++;
	info->signal = 1;
	free(str);
	if (ft_strcmp(temp, "(null)") == 0)
		free (temp);
}

void	ft_solve_string(t_info *info)
{
	char	*str;
	char	*tmp;
	int	strlen;

	strlen = 0;
	tmp = va_arg(info->arguments, char *);
	str = ft_strnew(info->precision);

	ft_strcpy(str, tmp);
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
	ft_handle_string(info, str, tmp, strlen);
}