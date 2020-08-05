/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 01:07:37 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/04 07:45:08 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int main()
{
	//No Flag
	/*ft_printf("%s|01|\n", "Puclla");
	printf("%s|01|\n", "Puclla");*/

	//[-] Flag
	/*ft_printf("%-40s|01|\n", "Puclla");
	printf("%-40s|01|\n", "Puclla");*/

	ft_printf("%-75.3s|\n", "Edith");
	//printf("%-20.3s|\n", "Edith");
	return (0);
}