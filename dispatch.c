/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:17:04 by dysotoma          #+#    #+#             */
/*   Updated: 2018/06/24 19:17:06 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h> //remove me

void	set_specifier(int *formatted, va_list arg, t_type *type)
{
	int			i;
	int			base;
	t_dispatch	dispatch;

	i = 65;
	base = 0;
	while ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		while (length(i))
			i++;
		if (i == 90)
			i = 97;
		if(formatted[i])
		{
			dispatch.func = spec(i);
			(dispatch.func)(formatted, arg, type, base);
			break ;
		}
		else
			i++;
	}
}

void	set_length(int *formatted, va_list arg, t_type *type, int base)
{
	int			i;
	t_dispatch	dispatch;

	i = 104;
	while (i >= 104 && i <= 122)
	{
		while (specifier(i))
			i++;
		if (formatted[i])
		{
			dispatch.func = spec(i);
			(dispatch.func)(formatted, arg, type, base);
			break ;
		}
		else
			i += 2;
	}
	// set_flag(formatted, arg, type);
}

// void	set_flag(int *formatted, va_list arg, t_type *type)
// {
// 	int i;

// 	i = 32;
// 	while (formatted[i] >= 32 && formatted[i] <= 48)
// 	{

// 	}
// }

void			handle(char *format, va_list arg, int *i, t_type *type)
{
	static	int	formatted[128];
	int			end;

	end = 0;
	while (format[*i] && !end)
	{
		if (flags(format[*i]) || length(format[*i]) || ft_isdigit(format[*i])
		|| (format[*i] == '.') || specifier(format[*i]))
		{
			if (ft_isdigit(format[*i]) && format[*i] != '0')
				set_width(format, i, type);
			if (specifier(format[*i]))
				end = 1;
			formatted[(int)format[*i]] += 1;
			*i += 1;
		}
		else
		{
			// type->bytes = -1;
			return ;
		}
	}
	set_specifier(formatted, arg, type);
	if (type->width)
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, format + *i, 1));
}

void			parse(char *format, va_list arg, int *i, t_type *type)
{
	while (format[*i] != '%' && format[*i])
	{
		resize(type);
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, format + *i, 1));
		// printf("%zu\n", type->bytes);
		(*i)++;
	}
	if (format[*i])
	{
		resize(type);
		if (format[++*i] == '%')
		{
			ft_strncpy(type->buff + type->bytes, "%", 1);
			type->bytes++; 
			(*i)++;
		}
		else
			handle(format, arg, i, type);
	}
	// else if (format[*i + 1] == '\0' && format[*i] == '%')
	// 	type->bytes = -1;
}
