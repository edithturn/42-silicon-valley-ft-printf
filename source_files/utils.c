#include "../header/ft_printf.h"

void	clean_flags(t_info *info)
{
	info->flag[e_minus] = '0';
	info->flag[e_plus] = '0';
	info->flag[e_space] = '0';
	info->flag[e_hash] = '0';
	info->flag[e_zero] = '0';

	//return (info);
}