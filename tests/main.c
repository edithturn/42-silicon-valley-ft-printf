/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 01:07:37 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/06 10:36:59 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source_files/ft_printf.h"

int main()
{
	//int a = 10;
	//int *ptr = &a;
	//ft_printf("Edith has %d cats and %d dogs\n", 42, 2);
	
	//ft_printf("My name starts with %c\n", 'E');
	//printf("My name starts with %-5c\n", "E    ");

	//ft_printf("%d\n", -7);
	/*Test %p 
	ft_printf("ft_printf %p\n", (void*)&ptr);
	printf("printf %p\n", (void*)&ptr); */

	/*ft_printf("%u",4 );
	int b = 5;
	int *p = &b;
	printf("%p\n", p);*/

	/*%
	ft_printf("%%\n");
	printf("%%");*/

	//char *str = "hello";
	//printf("%^-9s", str);	


	// String
	ft_printf("My ega is %s", "edith");

	//char *s = "Edith";
	//printf("%-5s\n", s);
	//printf("%-3d|\n", 10);
	//printf("%-*.4d|", 3, 10);
	return (0);
}