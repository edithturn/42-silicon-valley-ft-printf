/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 16:16:39 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/06 17:05:25 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source_files/ft_printf.h"

int main()
{
	system("clear");

	ft_printf("%c|\n",'E');
	ft_printf("%*c|\n",5,'E');
	ft_printf("%-4c|\n", 'E');
	ft_printf("%3c|\n", 'E');
	
	ft_printf("%s\n", "PRINTF");

	printf("%c|\n", 'E');
	printf("%*c|\n",5,'E');
	printf("%-4c|\n",'E');
	printf("%3c|\n", 'E');
	
	return (0);
}
