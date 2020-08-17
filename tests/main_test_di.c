/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 08:38:06 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/17 01:17:05 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../source/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Decimal - Integer ]  ----------------------------- \n\n");

    int    n1, n2, n3;
	n1 = 52;
	n2 = -1;
	n3 = 4000;

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%d|", n1));
   	printf(" LENGTH printf    : %d\n\n", printf("|%d|", n1));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%d|", n2));
   	printf(" LENGTH printf    : %d\n\n", printf("|%d|", n2));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%2d|", n3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%2d|", n3));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%0.5d|", n3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%0.5d|", n3));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-8.5d|", n3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%-8.5d|", n3));
	
	return (0);
}
