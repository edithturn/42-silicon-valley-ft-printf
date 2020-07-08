/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 11:40:22 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/07 23:54:31 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "ft_printf.h"

t_formater	ft_dispatcher(char conv_flag)
{
	// 255 because c,s, d is a numerical value between 0 and 255
	static	const	t_formater	formatter[255] = {
			['s'] = &ft_formatchar,
			['\b'] = &ft_formatchar,
			['\a'] = &ft_formatchar,
			['\\'] = &ft_formatchar,
			['/'] = &ft_formatchar,
			['s'] = &ft_formatstring,
			['d'] = &ft_formatdecimal,
	};

	return (formatter[(unsigned int)conv_flag]);
} */