/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 01:16:09 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/13 11:14:23 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

static t_info *process_converter(t_info *info )
{
	if((*info->format == 'd' || *info->format == 'i') && info->indicator == 0 )
		info = process_decinal_integer(info);

	return (info);
}

t_info	*process_input(t_info	*info)
{
	info->format++;
	info = process_converter(info);
	return (info);
}