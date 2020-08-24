/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 23:57:32 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:55:46 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_eval_width(t_info *info)
{
	info->width = 0;
	if (*info->format == '*')
	{
		info->width = va_arg(info->arguments, int);
		if (info->width < 0)
		{
			info->width = info->width * -1;
			info->flag[e_minus] = '1';
		}
		info->format++;
	}
	if (*info->format >= '0' && *info->format <= '9')
		info->width = ft_atoi(info->format);
	while (*info->format >= '0' && *info->format <= '9')
		info->format++;
}
