/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_id_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:00:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/17 01:10:27 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	id_width(t_info *info, long long nbr, int nbrlen, int diff)
{
	if (info->flag[e_zero] == '1' && diff == 0)
	{
		if (info->point != 0)
			while (--info->width > nbrlen)
				ft_putchar(' ');
		if (nbr < 0)
			ft_putchar('-');
		if(info->point == 0)
			while (--info->width > nbrlen)
				ft_putchar('0');
	}
	else
	{
		while (--info->width > (nbrlen + diff))
			ft_putchar(' ');
		if (nbr < 0)
			ft_putchar('-');
	}
	ft_putnchar('0', diff);
	if (info->point != 1 || nbr != 0)
		ft_putnbr(nbr);
}