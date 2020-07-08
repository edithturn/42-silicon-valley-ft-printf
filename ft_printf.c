/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 09:25:02 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/08 11:55:28 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//ft_printf("%d", 42)
//*format = "d"
//... = 42
int ft_printf(const char *format, ...)
{
	int		i;
	t_conversors conversor;

	va_start(conversor.arguments, format);
	i = 0; //TODO: No sendng a "d"
	while (format[i]  != '\0')
	{
			if (format[i] == '%')
				i = ft_find_conversion(&format[ i ] );
			else
				i++;
			
			/* llamar a dispatcher*/
			/*i = i + ft_process_conversion(&format[i], &conversor);*/
	}

	va_end(conversor.arguments);
	return (i);
}