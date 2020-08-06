/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:16:58 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 13:01:03 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strnstr function locates the first occurrence
**of the null terminated string little in the string
**big, where not more than len characters
**are searched. Characters that appear
**after a '\0' character are not searched.
*/

char	*ft_strnstr(const char *src, const char *find, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)src);
	while ((src[i] != '\0') && (i < n))
	{
		if (src[i] == find[0])
		{
			j = 1;
			while (((find[j] != '\0') && (src[i + j] == find[j]) \
				&& ((j + i) < n)))
				j++;
			if (find[j] == '\0')
				return ((char*)&src[i]);
		}
		i++;
	}
	return (0);
}
