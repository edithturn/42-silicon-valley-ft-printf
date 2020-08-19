/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 06:08:21 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/18 15:43:58 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	clean_flags(t_info *info)
{
	info->flag[e_minus] = '0';
	info->flag[e_plus] = '0';
	info->flag[e_space] = '0';
	info->flag[e_hash] = '0';
	info->flag[e_zero] = '0';

}