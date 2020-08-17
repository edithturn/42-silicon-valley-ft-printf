#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);

// Eum for type data
enum e_length
{ 
    e_cchar,
	e_short,
	e_long,
	e_longlong
};
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
	va_list		arguments;
	const char	*format;
	int			width;
	int			precision;
	char		flag[5];  
	char		length[5];
	int		total_length;
	int			indicator;
	int			point;
	int		signal;
}					t_info;

//

// eval_input
void	ft_eval_input(t_info	*info);


// Funcions conversors
//cspdiuxX%
void	ft_solve_char(t_info *info);
void	ft_solve_string(t_info *info);
void	ft_solve_pointer(t_info *info);
void	ft_solve_id(t_info *info);
void	ft_solve_uint(t_info *info);
void	ft_solve_hex(t_info *info);
void	ft_solve_percent(t_info *info);


// Funtions eval


// Dispatcher
typedef	void eval_format_specifiers(t_info *info);

// eval_context
void	ft_eval_flag(t_info *info);
void	ft_eval_width(t_info *info);
void	ft_eval_precision(t_info *info);

//util
void	clean_flags(t_info *info);
//id Utils
void	id_width(t_info *info, long long nbr, int nbrlen, int diff);

// Numbers put
void	ft_putnbr(long long i);
#endif