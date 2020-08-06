/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:29:18 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/29 12:35:34 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strlcpy() and strlcat() functions copy and concatenate strings
**respectively.  They are designed to be safer, more consistent, and less
**error prone replacements for strncpy(3) and strncat(3).
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t zsrc;
	size_t i;

	i = 0;
	if (!dst || !src)
		return (0);
	zsrc = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (zsrc);
}
