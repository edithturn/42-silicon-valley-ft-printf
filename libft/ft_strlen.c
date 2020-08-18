/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:29:27 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/18 10:04:55 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strlen() function calculates the length of the string s, excluding
**the terminating null byte ('\0').
*/

size_t	ft_strlen(const char *str)
{
	const char *ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}
