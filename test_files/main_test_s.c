/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 01:07:37 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/28 22:36:51 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int main()
{
	char c;
	
	c = 'A';
	
	ft_printf("%7.4s|\n", "Edith");
	//printf("%7.4s|\n", "Edith");
	return (0);
}