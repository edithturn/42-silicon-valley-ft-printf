/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:24:09 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:24:11 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *ustr;
	unsigned char uc;

	ustr = (unsigned char *)str;
	uc = (unsigned char)c;
	while (n)
	{
		if (*ustr == uc)
			return (ustr);
		ustr++;
		n--;
	}
	return (NULL);
}
