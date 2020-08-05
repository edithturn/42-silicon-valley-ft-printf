/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 00:20:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/04 18:48:09 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	solve_string(t_info *info)
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
	//return (info);
}