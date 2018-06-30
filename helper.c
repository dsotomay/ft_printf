/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:14:44 by dysotoma          #+#    #+#             */
/*   Updated: 2018/06/24 19:14:52 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define INIT int i = 0; int tmp

void	resize(t_type *type)
{
	if (type->bytes + 2 == MAX_BUFF)
	{
		type->count++;
		type->buff = (char*)ft_realloc(type->buff, MAX_BUFF + 2);
	}
}

void	set_width(char *format, int *i, t_type *type)
{
	if (format[*i - 1] != '.')
		type->width = ft_atoi(format + *i);
	else
		type->precision = ft_atoi(format + *i);
	while (ft_isdigit(format[*i]))
		(*i)++;
}

int		check_length(int *formatted)
{
	return (formatted[104] || formatted[106] || formatted[108] || formatted[122]);
}

void	put_min_max_width(int *formatted, t_type *type)
{
	INIT;
	tmp = ft_strlen(type->str);
	if (type->width > tmp + type->precision)
		type->width -= tmp + type->precision + 1;
	else if (type->width > tmp)
		type->width -= tmp;
	else if (type->width < tmp || type->width < type->precision)
		type->width = 0;
	if (type->str[0] == '-' && type->width)
		i = 1;
	width(formatted, type, i);
	minus_plus(formatted, type);
	i = 0;
	if (type->precision > tmp)
		while (i + tmp < type->precision)
			*(type->buff + type->bytes + i++) = '0';
	type->bytes += i;
}

void	reset(int *formatted)
{ 
	formatted[(int)'s'] = 0;
	formatted[(int)'S'] = 0;
	formatted[(int)'p'] = 0;
	formatted[(int)'d'] = 0;
	formatted[(int)'D'] = 0;
	formatted[(int)'i'] = 0;
	formatted[(int)'o'] = 0;
	formatted[(int)'O'] = 0;
	formatted[(int)'u'] = 0;
	formatted[(int)'U'] = 0;
	formatted[(int)'x'] = 0;
	formatted[(int)'X'] = 0;
	formatted[(int)'c'] = 0;
	formatted[(int)'C'] = 0;
	formatted[(int)'h'] = 0;
	formatted[(int)'l'] = 0;
	formatted[(int)'j'] = 0;
	formatted[(int)'z'] = 0;
	formatted[(int)'#'] = 0;
	formatted[(int)'0'] = 0;
	formatted[(int)'-'] = 0;
	formatted[(int)'+'] = 0;
	formatted[(int)' '] = 0;
}
