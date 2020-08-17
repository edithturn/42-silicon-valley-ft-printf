/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 19:30:11 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/17 00:51:28 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(long long nbr)
{
	int		nbrlen;

	nbrlen = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = nbr *(-1);
	while (nbr > 0)
	{
		nbrlen++;
		nbr = nbr / 10;
	}
	return (nbrlen);
}