/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_main_test_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 22:11:54 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/20 12:43:27 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../source/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Pointer ]  ----------------------------- \n\n");

	//ft_printf("%s\n" , "|01| Null Pointer");
	//ft_printf("%p\n", NULL);
	//Pointers - Basic
	static char	a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;

	char *s = "asd";
    char **p = &s;

    ft_printf("%p\n", p);
	printf("%p\n", p);
    /*printf("The direction of s is: %p\n", &s);

    printf("The value of p is: %p\n", p);
    printf("The direction of p is: %p\n", &p);

    printf("The direction of s[0] is: %p\n", &s[0]);
    printf("The direction of s[1] is: %p\n", &s[1]);
    printf("The direction of s[2] is: %p\n", &s[2]);*/

/*
    ft_printf("The value of s is: %p\n", s);
    ft_printf("The direction of s is: %p\n", &s);

    ft_printf("The value of p is: %p\n", p);
    ft_printf("The direction of p is: %p\n", &p);

    ft_printf("The direction of s[0] is: %p\n", &s[0]);
    ft_printf("The direction of s[1] is: %p\n", &s[1]);
    ft_printf("The direction of s[2] is: %p\n", &s[2]);*/


	printf(" LENGTH printf    : %d\n\n", printf("%p", NULL));
	printf(" LENGTH printf    : %d\n\n", printf("%5p", 0));

	printf("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	
	return (0);
}
