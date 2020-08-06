/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:24:06 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 12:36:48 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strrchr function returns a
**pointer to the last
**occurrence of the character
**c in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int find_index;

	i = 0;
	find_index = -1;
	while (s[i])
	{
		if (s[i] == c)
			find_index = i;
		i++;
	}
	if (s[i] == c)
		find_index = i;
	if (find_index >= 0)
		return ((char *)(s + find_index));
	return (NULL);
}
