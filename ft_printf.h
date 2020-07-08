#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int ft_printf(const char *format, ...);

int ft_find_conversion(const char *format);

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
	unsigned	int	s_single_character;
	unsigned	int	s_string_characters;
	unsigned	int	s_pointer;
	unsigned	int	s_decimal;
	unsigned	int	s_integer;
	unsigned	int	s_unsigned_decimal;
	unsigned	int	s_number_hexadecinal_lower;
	unsigned	int	s_number_hexadecimal_capital;
	unsigned	int	s_percent_sign;
	unsigned	int	invalid;
	va_list	arguments;
	unsigned long long	totallen;

}				t_conversors;

#endif