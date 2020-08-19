/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 08:38:06 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/19 11:29:47 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../source/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Decimal - Integer ]  ----------------------------- \n\n");

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%d|", 52));
   	printf(" LENGTH printf    : %d\n\n", printf("|%d|", 52));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%d|", 2));
   	printf(" LENGTH printf    : %d\n\n", printf("|%d|", 2));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%2d|", -3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%2d|", -3));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%0.5d|", -3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%0.5d|", -3));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-8.5d|", -3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%-8.5d|", -3));
	
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%8d|", 2));
   	printf(" LENGTH printf    : %d\n\n", printf("|%8d|", 2));
	
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.6d|", -3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%.6d|", -3));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.3d|", 13862));
   	printf(" LENGTH printf    : %d\n\n", printf("|%.3d|", 13862));
	
	return (0);
}
