/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_main_test_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 22:11:54 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/25 10:03:38 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Pointer ]  ----------------------------- \n\n");

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
	static char *s_hello = "hello world";

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%p|", p));
	printf(" LENGTH printf    : %d\n\n", printf("|%p|", p));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-.8p|", p));
	printf(" LENGTH printf    : %d\n\n", printf("|%-.8p|", p));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%-.2p|", p));
	printf(" LENGTH printf    : %d\n\n", printf("|%-.2p|", p));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%p|", NULL));
	printf(" LENGTH printf    : %d\n\n", printf("|%p|", NULL));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%5p|", 0));
	printf(" LENGTH printf    : %d\n\n", printf("|%5p|", 0));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.*p|", -1, s_hello));
	printf(" LENGTH printf    : %d\n\n", printf("|%.*p|", -1, s_hello));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.*p|", -3, 0));
	printf(" LENGTH printf    : %d\n\n", printf("|%.*p|", -3, 0));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%.*p|", -1, 0));
	printf(" LENGTH printf    : %d\n\n", printf("|%.*p|", -1, 0));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("The value of p is: |%p|", p));
	printf(" LENGTH ft_printf : %d\n", printf("The value of p is: |%p|", p));

	printf(" LENGTH printf    : %d\n\n", ft_printf("The direction of p is: |%p|", &p));
	ft_printf(" LENGTH printf    : %d\n\n", ft_printf("The direction of p is: |%p|", &p));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("The direction of s[0] is: |%p|", &s[0]));
	printf(" LENGTH ft_printf : %d\n", printf("The direction of s[0] is: |%p|", &s[0]));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("The direction of s[1] is: |%p|", &s[1]));
	printf(" LENGTH ft_printf : %d\n", printf("The direction of s[1] is: |%p|", &s[1]));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("The direction of s[2] is: |%p|", &s[2]));
	printf(" LENGTH ft_printf : %d\n", printf("The direction of s[2] is: |%p|", &s[2]));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("The value of s is: %p", s));
	printf(" LENGTH ft_printf : %d\n", printf("The value of s is: |%p|", s));

	ft_printf(" LENGTH ft_printf : %d\n", ft_printf("The direction of s is: |%p|", &s));
	printf(" LENGTH ft_printf : %d\n", printf("The direction of s is: |%p|", &s));

	 ft_printf(" LENGTH ft_printf : %d\n", ft_printf("|%p%p%p%p%p%p%p%p%p%p%p%p|",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12));
	printf(" LENGTH ft_printf : %d\n", printf("|%p%p%p%p%p%p%p%p%p%p%p%p|",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12));

	/* //Others
	ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	*/
	return (0);
}
