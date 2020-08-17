/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:13:29 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/16 17:38:47 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_eval_flag(t_info *info)
{
	clean_flags(info);
	while(*info->format == '-' || *info->format == '0')
	{
		if(*info->format == '-')
			info->flag[e_minus] = '1';
		if (*info->format == '0')
			info->flag[e_zero] = '1';
		info->format++;
	}
}