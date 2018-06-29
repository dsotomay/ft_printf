/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:14:00 by dysotoma          #+#    #+#             */
/*   Updated: 2018/06/24 19:14:06 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	d(int *formatted, va_list arg, t_type *type, int base)
{
	base = 10;
	if (check_length(formatted))
		set_length(formatted, arg, type, base);
	else
		type->str = ft_itoa_base((va_arg (arg, int)), base);
	put_min_max_width(formatted, type);
	if (formatted[(int)'d'] == 1)
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
	reset(formatted);
}

void	i(int *formatted, va_list arg, t_type *type, int base)
{
	base = 10;
	if (check_length(formatted))
	{
		set_length(formatted, arg, type, base);
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
		// free(type->str);
	}
	else
	{
		type->str = ft_itoa_base((va_arg (arg, int)), base);
		if (formatted[(int)'i'] == 1)
			type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
	}
	reset(formatted);
}

void	o(int *formatted, va_list arg, t_type *type, int base)
{
	base = 8;
	if (check_length(formatted))
	{
		set_length(formatted, arg, type, base);
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
		// free(type->str);
	}
	else
	{	
		type->str = ft_utoa_base((va_arg (arg, unsigned int)), base);
		if (formatted[(int)'o'] == 1)
			type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
	}
	reset(formatted);
}

void	u(int *formatted, va_list arg, t_type *type, int base)
{
	base = 10;
	if (check_length(formatted))
	{
		set_length(formatted, arg, type, base);
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
		// free(type->str);
	}
	else
	{	
		type->str = ft_utoa_base((va_arg (arg, unsigned int)), base);
		if (formatted[(int)'u'] == 1)
			type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
	}
	reset(formatted);
}

void	x(int *formatted, va_list arg, t_type *type, int base)
{
	base = 16;
	if (check_length(formatted))
	{
		set_length(formatted, arg, type, base);
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
		// free(type->str);
	}
	else
	{
		type->str = ft_utoa_base((va_arg (arg, unsigned int)), base);
		if (formatted[(int)'x'] == 1)
			type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, type->str, ft_strlen(type->str)));
	}
	reset(formatted);
}
