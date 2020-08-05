/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_character.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:05:50 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/05 00:22:22 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

void	solve_character(t_info *info)
{
	char	c;

	c = va_arg(info->ap, int);

	//if(flag[minus] == 1)

	//send context in a structure
	ft_putchar(c);
	info->format++;
}