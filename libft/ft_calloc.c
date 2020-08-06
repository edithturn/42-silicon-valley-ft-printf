/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 22:43:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/29 13:24:22 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  calloc()  function allocates memory for an array of nmemb elements
**of size bytes each and returns a pointer to the allocated memory.   The
**memory  is  set  to zero.  If nmemb or size is 0, then calloc() returns
**either NULL, or a unique pointer value that can later  be  successfully
**passed to free().
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!(ptr))
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
