/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:28:35 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/27 22:15:32 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strdup() function returns a pointer to a  new  string  which  is  a
**duplicate  of the string s.  Memory for the new string is obtained with
**malloc(3), and can be freed with free(3).
*/

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(*src) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
