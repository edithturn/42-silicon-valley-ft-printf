#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int ft_printf(const char *format, ...);

int ft_find_conversion(const char *format, int i);

/* Enum to assign names to the integral constans for conversors */
enum  e_conversors
{
	e_single_character,
	e_string_characters,
	e_pointer,
	e_decimal,
	e_integer,
	e_unsigned_decimal,
	e_number_hexadecinal_lower,
	e_number_hexadecimal_capital,
	e_percent_sign,
	invalid
};

/* Struct to save the value of the conversors */
/* cspdiuxX% */
typedef	struct	s_conversors
{
	unsigned	char	s_single_character;
	unsigned	char	s_string_characters;
	unsigned	char	s_pointer;
	unsigned	char	s_decimal;
	unsigned	char	s_integer;
	unsigned	char	s_unsigned_decimal;
	unsigned	char	s_number_hexadecinal_lower;
	unsigned	char	s_number_hexadecimal_capital;
	unsigned	char	s_percent_sign;
	unsigned	char	invalid;
	va_list	arguments;
	unsigned long long	totallen;

}				t_conversors;

#endif