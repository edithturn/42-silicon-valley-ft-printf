/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_main_test_di.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 08:38:06 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/25 18:40:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Decimal - Integer ]  ----------------------------- \n\n");

	ft_printf("%s\n" , "|01| Just decimal");
	ft_printf("|%-10.8d|\n", 52);
   	printf(" LENGTH printf    : %d\n\n", printf("|%d|", 52));
	
	ft_printf("%s\n" , "|01| Just decimal");
	ft_printf("|%d|\n", 52);
   	printf(" LENGTH printf    : %d\n\n", printf("|%d|", 52));

	ft_printf("%s\n" , "|02| Negative number");
	ft_printf("|%d|\n", -2);
   	printf(" LENGTH printf    : %d\n\n", printf("|%d|", -2));

	ft_printf("%s\n" , "|03| Negative flag");
	ft_printf("|%-d|\n", 3);
   	printf(" LENGTH printf    : %d\n\n", printf("|%-d|", 3));

	ft_printf("%s\n" , "|04| Negative flag with width greater than number");
	ft_printf("|%-4d|\n", 3);
   	printf(" LENGTH printf    : %d\n\n", printf("|%-4d|", 3));

	ft_printf("%s\n" , "|05| Negative flag with width less than number");
	ft_printf("|%-2d|\n", 3000);
   	printf(" LENGTH printf    : %d\n\n", printf("|%-2d|", 3000));

	ft_printf("%s\n" , "|06| Just width greater than nbrlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%8d|", 3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%8d|", 3));

	ft_printf("%s\n" , "~07~ Precision less than nbrlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.1d|", 70));
   	printf(" LENGTH printf    : %d\n\n", printf("|%.1d|", 70));

	ft_printf("%s\n" , "~08~ Precision greater than nbrlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.4d|", 7));
   	printf(" LENGTH printf    : %d\n\n", printf("|%.4d|", 7));
	
	ft_printf("%s\n" , "~09~ Precision greater than nbrlen and flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-.4d|", 7));
   	printf(" LENGTH printf    : %d\n\n", printf("|%-.4d|", 7));

	ft_printf("%s\n" , "~10~ Precision greater than nbrlen and flag [0]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%0.4d|", 7));
   	printf(" LENGTH printf    : %d\n\n", printf("|%0.4d|", 7));

	ft_printf("%s\n" , "~11~ Precision greater than nbrlen and negative number");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.1d|", -30));
   printf(" LENGTH printf    : %d\n\n", printf("|%.1d|", -30));

	ft_printf("%s\n" , "~12~ Flag [0]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-08.1d|", 3));
   	printf(" LENGTH printf    : %d\n\n", printf("|%-08.1d|", 3));

	ft_printf("%s\n" , "~13~ Flag [-], width and precision > nbrlen, precision > width");
	ft_printf(" LENGTH printf    : %d\n\n", ft_printf("|%-5.8d|", 3));
	printf(" LENGTH printf    : %d\n\n", printf("|%-5.8d|", 3));

	ft_printf("%s\n" , "~14~ Flag [-], width and precision > nbrlen, precision < width");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-8.5d|", 3));
	printf(" LENGTH ft_printf : %d\n", printf("|%-8.5d|", 3));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.3d|", 13862));
   	printf(" LENGTH printf    : %d\n\n", printf("|%.3d|", 13862));

	//Fix Bug
	ft_printf("|%-7d|\n", -14);
	printf("|%-7d|\n", -14);

	//Elian
	ft_printf("|%4d|\n", 33);
	printf("|%4d|\n", 33);
	ft_printf("|%d|\n", 2147483648);
	printf("|%d|\n", 2147483648);
	
	// Specific test
	ft_printf("|%0*.*d|\n", 3, -2, 8);
    printf("|%0*.*d|\n", 3, -2, 8);

	return (0);
}
