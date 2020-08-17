/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 00:17:06 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/17 00:34:49 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long long i)
{
	if (i < 0)
		ft_putnbr(i * -1);
	else if (i >= 0 && i <= 9)
		ft_putchar('0' + i);
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}