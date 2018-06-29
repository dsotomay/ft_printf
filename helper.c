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
		type->width -= tmp + type->precision;
	else if (type->width > tmp)
		type->width -= tmp;
	if (type->str[0] == '-')
		i = 1;
	if (!formatted[(int)'-'] && !formatted[(int)'0'] && type->width)
		while (i - 1 < type->width)
			*(type->buff + type->bytes + i++) = ' ';
	else if (!formatted[(int)'-'] && formatted[(int)'0'] && !type->precision)
		while (i - 1 < type->width)
			*(type->buff + type->bytes + i++) = '0';
	type->bytes += i;
	if (type->str[0] == '-')
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, "-", 1));
	else if (formatted[43] && (formatted[(int)'d'] || formatted[(int)'i']))
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, "+", 1));
	i = tmp;
	if (type->precision > tmp)
		while (i < type->precision)
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
