/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_common.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 23:49:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/23 15:24:09 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_length(t_info *info, int addr, int addrlen)
{
	if (IS_MACOS)
	{
		if (addr == 0 && info->point != 1)
			addrlen++;
	}
	else
	{
		if (addr == 0 && info->point != 1)
			addrlen = addrlen + 3;
	}
	return (addrlen);
}