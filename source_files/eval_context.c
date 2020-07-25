/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_context.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 14:39:18 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/24 15:22:19 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

t_info	*set_flags(t_info *info)
{
	clean_flags(info);
	while(*info->format == '-' || *info->format == '+' || *info->format == ' ' || *info->format == '#' || *info->format == '0')
		{
			if(*info->format == '-')
				info->flag[e_minus] = '1';
			if(*info->format == '+')
				info->flag[e_plus] = '1';
			if(*info->format == ' ')
				info->flag[e_space] = '1';
			if(*info->format == '#')
				info->flag[e_hash] = '1';
			if (*info->format == '0')
				info->flag[e_zero] = '1';
			*info->format++;
		}
}