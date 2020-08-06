/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:07:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/29 19:51:21 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				num;
	int				sign;
	char			*s;

	i = 0;
	num = 0;
	sign = 1;
	s = (char *)str;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v' \
	|| s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (ft_isdigit(s[i]))
	{
		num = ((num * 10) + (s[i] - '0'));
		i++;
	}
	return (sign * (int)num);
}
