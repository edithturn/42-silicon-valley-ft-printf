/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 21:54:10 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 10:02:09 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dispatcher(t_info *info, int num)
{
	const	t_formatter	*functions_array[e_length] = {
	[e_char] = ft_solve_char,
	[e_string] = ft_solve_string,
	[e_pointer] = ft_solve_pointer,
	[e_decimal_int] = ft_solve_di,
	[e_u_dec_int] = ft_solve_uint,
	[e_u_hex_int] = ft_solve_hex,
	[e_percentage] = ft_solve_percent};

	functions_array[num](info);
}
