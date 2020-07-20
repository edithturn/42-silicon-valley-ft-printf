/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 01:07:37 by epuclla           #+#    #+#             */
/*   Updated: 2020/07/19 18:15:31 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int main()
{
	int a = 10;
	int *ptr = &a;
	//ft_printf("Edith has %d cats\n", 42);
	//ft_printf("My name is %s Puclla\n", "Edith");
	//ft_printf("My name start with %c letter\n", 'E');
	/*Test %p 
	ft_printf("ft_printf %p\n", (void*)&ptr);
	printf("printf %p\n", (void*)&ptr); */

	/*ft_printf("%u",4 );
	int b = 5;
	int *p = &b;
	printf("%p\n", p);*/

	// %
	ft_printf("%%\n");
	printf("%%");
	return (0);
}