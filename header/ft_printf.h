#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int ft_printf(const char *format, ...);

typedef	struct		s_info
{
	va_list		ap;
	int			length_int;
	const char	*format;
	int			mfw;
	int			prec;
	char		flag[5];
	char		length_char[5];
	int			indicator;
	int			point;
}					t_info;

//creating a function pointer of t_info
t_info	*process_input(t_info	*info);
static t_info *process_converter(t_info *info );
t_info *process_decinal_integer(t_info *info);
t_info	*process_input(t_info	*info);
#endif