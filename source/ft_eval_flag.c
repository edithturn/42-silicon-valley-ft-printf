/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:13:29 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 15:57:59 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_eval_flag(t_info *info)
{
	info->flag[e_minus] = '0';
	info->flag[e_zero] = '0';
	while (*info->format == '-' || *info->format == '0')
	{
		if (*info->format == '-')
			info->flag[e_minus] = '1';
		if (*info->format == '0')
			info->flag[e_zero] = '1';
		info->format++;
	}
}
