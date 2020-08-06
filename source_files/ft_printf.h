#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);

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
//cspdiuxX%
enum e_dispatch
{ 
    e_char,
	e_string,
	e_pointer,
	e_decimal_int,
	e_u_dec_int,
	e_u_hex_int,
	e_percentage,
	e_length
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

//

// eval_input
void	eval_input(t_info	*info);


// Funcions conversors
//cspdiuxX%
void	solve_character(t_info *info);
void	solve_string(t_info *info);
void	solve_pointer(t_info *info);
void	solve_decimal_integer(t_info *info);
void	solve_unsigned_decimal_integer(t_info *info);
void	solve_unsigned_hexadecimal_integer(t_info *info);
void	solve_percent_sign(t_info *info);



// Dispatcher
typedef	void eval_format_specifiers(t_info *info);

// eval_context
void	set_flags(t_info *info);
void	set_width(t_info *info);
void	set_precision(t_info *info);
void	set_length(t_info *info);

//util
void	clean_flags(t_info *info);

#endif