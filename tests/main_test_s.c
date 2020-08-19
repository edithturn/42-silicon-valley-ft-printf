/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 01:07:37 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/18 22:40:46 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/ft_printf.h"

int main()
{

	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Decimal - Integer ]  ----------------------------- \n\n");

	char	*s;

	s = "HelloWorld";
	ft_printf("%s\n" , "|01| Just string");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%s|", s));

	ft_printf("%s\n" , "|02|  Flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%-s|", s));

	ft_printf("%s\n" , "|03| Width 01 digit");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%3s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%3s|", s));

	ft_printf("%s\n" , "|03| Width 01 digit, less than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%3s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%3s|", s));

	ft_printf("%s\n" , "|04| Width greater than strlen");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%12s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%12s|", s));

	ft_printf("%s\n" , "|05| Width greater than strlen and flag [-]");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-12s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%-12s|", s));

	ft_printf("%s\n" , "|01| Just point");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-5s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%-5s|", s));

	ft_printf("%s\n" , "|01| Just point");
	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.s|", s));
	printf(" LENGTH printf    : %d\n\n", printf("|%.s|", s));
	
	
	//No Flag
	/*ft_printf("%s|01|\n", "Puclla");
	printf("%s|01|\n", "Puclla");*/

	//[-] Flag
	/*ft_printf("%-40s|01|\n", "Puclla");
	printf("%-40s|01|\n", "Puclla");*/

	//width and precision
	/*ft_printf("%-75.10s|\n", "EdithEdithEdithEdith");
	printf("%-75.10s|\n", "EdithEdithEdithEdith");*/

	//parameters
	//ft_printf("%-*.*s|\n",8, 4, "Edit");
	//printf("%-*.*s|\n",8, 4,"Edit");

	//ft_printf("%3s|\n","Edith");
	//printf("%8s|\n","Edith");
	return (0);
}