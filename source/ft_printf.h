/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 10:01:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/08/24 11:40:45 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

/*
**  ft_printf str length for "(nill)"
*/
# ifndef NULL_SIZE
#  define NULL_SIZE 6
# endif

enum				e_flags
{
	e_minus,
	e_zero
};

enum				e_dispatch
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

typedef struct		s_info
{
	const char		*format;
	va_list			arguments;
	int				width;
	int				precision;
	char			flag[2];
	int				total_length;
	int				point;
}					t_info;

/*
**  ft_printf solution functions
*/

int					ft_printf(const char *format, ...);
void				ft_solve_char(t_info *info);
void				ft_solve_string(t_info *info);
void				ft_solve_pointer(t_info *info);
void				ft_solve_di(t_info *info);
void				ft_solve_uint(t_info *info);
void				ft_solve_hex(t_info *info);
void				ft_solve_percent(t_info *info);

/*
**  ft_printf evaluation functions
*/

void				ft_eval_input(t_info	*info);
void				ft_eval_flag(t_info *info);
void				ft_eval_width(t_info *info);
void				ft_eval_precision(t_info *info);

/*
**  ft_printf extra functions
*/
int					ft_handle_length(t_info *info, int addr, int addrlen);
int					ft_select_format_specifier(t_info *info);
typedef	void		t_formatter(t_info *info);

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

#endif
