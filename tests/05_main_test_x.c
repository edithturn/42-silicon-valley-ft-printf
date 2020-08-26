/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_main_test_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 22:11:54 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/25 18:40:24 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ hexadecimal ]  ----------------------------- \n\n");


	ft_printf("%s\n" , "~01~ Just hexadecimal number");
	ft_printf(" LENGTH printf    : %d\n", ft_printf("|%x|", 52));
   	printf(" LENGTH printf    : %d\n\n", printf("|%x|", 52));

	ft_printf("%s\n" , "~02~ Hexadecimal number width flag [0] and width");
	ft_printf(" LENGTH printf    : %d\n", ft_printf("|%05x|", 43));
   	printf(" LENGTH printf    : %d\n\n", printf("|%05x|", 43));

	ft_printf("%x\n",4294967295u);
	printf("%x\n\n", 4294967295u);

	ft_printf("%x\n",33);
	printf("%x\n\n", 33); 

	ft_printf("%X\n",94827);
	printf("%X\n\n", 94827); 

	return (0);
}
