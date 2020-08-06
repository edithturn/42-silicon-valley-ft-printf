/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 01:07:37 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/06 10:51:15 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source_files/ft_printf.h"

int main()
{
	//No Flag
	/*ft_printf("%s|01|\n", "Puclla");
	printf("%s|01|\n", "Puclla");*/

	//[-] Flag
	/*ft_printf("%-40s|01|\n", "Puclla");
	printf("%-40s|01|\n", "Puclla");*/

	/*
	ft_printf("%-75.10s|\n", "EdithEdithEdithEdith");
	printf("%-75.10s|\n", "EdithEdithEdithEdith"); */

	ft_printf("%-*.10s|\n",75, "EdithEdithEdithEdith");
	printf("%-*.10s|\n", 75, "EdithEdithEdithEdith"); 

	return (0);
}