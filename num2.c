
#include "ft_printf.h"

void	D(int *formatted, va_list arg, t_type *type, int base)
{
	base = 10;
	if (check_length(formatted))
		set_length(formatted, arg, type, base);
	else
		type->str = ft_itoa_base((va_arg (arg, int)), base);
	put_min_max_width(formatted, type);
	if (formatted[(int)'d'] == 1)
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
}

void	O(int *formatted, va_list arg, t_type *type, int base)
{
	base = 8;

	if (check_length(formatted))
		set_length(formatted, arg, type, base);
	else
		type->str = ft_utoa_base((va_arg (arg, unsigned int)), base);
	put_min_max_width(formatted, type);
	hash(formatted, type);
	if (formatted[(int)'o'] == 1)
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
}

void	U(int *formatted, va_list arg, t_type *type, int base)
{
	base = 10;
	if (check_length(formatted))
		set_length(formatted, arg, type, base);
	else
		type->str = ft_utoa_base((va_arg (arg, unsigned int)), base);
	put_min_max_width(formatted, type);
	if (formatted[(int)'u'] == 1)
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
}

void	X(int *formatted, va_list arg, t_type *type, int base)
{
	int i;

	i = 0;
	base = 16;
	if (check_length(formatted))
		set_length(formatted, arg, type, base);
	else
		type->str = ft_utoa_base((va_arg (arg, unsigned int)), base);
	while (type->str[i])
		ft_toupper(type->str[i++]);
	put_min_max_width(formatted, type);
	hash(formatted, type);
	if (formatted[(int)'x'] == 1)
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
}