#include "../source/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Unsigned ]  ----------------------------- \n\n");

	ft_printf("%5%\n");
	printf("%5%\n\n");

	ft_printf("%-5%\n");
	printf("%-5%\n\n");

	ft_printf("%05%\n");
	printf("%05%\n\n");

	ft_printf("%-05%\n");
	ft_printf("%-05%\n\n");

}

