/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 08:38:06 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/14 23:22:44 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../source/ft_printf.h"

int main()
{
	system("clear");

	printf("\n%s\n", "DECIMAL && INTEGER");

	//printf("\n%s\n", "ft_printf");
	//ft_printf("%-2d|\n",6);
	//ft_printf("%d|\n", -6);
	//ft_printf("%+5d\n", 0);

	printf("\n%s\n", "printf");
	printf("%-2d|\n", 8);

//printf("%-5d|\n", 8);
	//("%-3.3d|\n", 8);
	printf("%.8d|\n", 82);
	//printf("%d|\n", 6);
    //printf("%+5d\n", 0);

	return (0);
}
