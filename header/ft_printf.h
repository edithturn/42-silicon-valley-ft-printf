#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);

// Enum for Flags
enum e_flags
{ 
    e_minus,
	e_plus,
	e_space,
	e_hash,
	e_zero
};


// Enum for Distpach table
enum e_dispatch
{ 
    e_char,
	e_string,
	e_pointer_void,
	e_decimal_int,
	e_u_int,
	e_u_int_lower,
	e_u_int_upper,
	e_percent_sign,
	e_lenght
};

typedef	struct		s_info
{
	va_list		ap;
	int			length_int;
	const char	*format;
	int			width;
	int			precision;
	char		flag[5];
	char		length_char[5];
	int			indicator;
	int			point;
}					t_info;


// eval_input
t_info	*eval_input(t_info	*info);

// Funcions conversors
t_info *solve_character(t_info *info);
t_info *solve_string(t_info *info);
t_info *solve_pointer_void(t_info *info);
t_info *solve_unsigned_int(t_info *info);
t_info *solve_decinal_integer(t_info *info);
t_info *solve_unsigned_int_lower(t_info *info);
t_info *solve_unsigned_int_upper(t_info *info);
t_info *solve_percent_sign(t_info *info);


// Dispatcher
typedef t_info *eval_format_specifiers(t_info *info);

// eval_context
t_info	*set_flags(t_info *info);
t_info	*set_width(t_info *info);
t_info *set_precision(t_info *info);
t_info *set_length(t_info *info);
//util
t_info	*clean_flags(t_info *info);

#endif