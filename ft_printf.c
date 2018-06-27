/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:54:51 by dysotoma          #+#    #+#             */
/*   Updated: 2018/05/23 14:54:54 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define INIT int i = 0; t_type type; va_list arg

int ft_printf(char *format, ...)
{
	INIT;
	va_start(arg, format);

	type.count = 1;
	type.bytes = 0;
	type.buff = ft_strnew(1023);
	while (format[i] && type.bytes != (size_t)-1)
	{
		if (format[i] == '%' && !format[i + 1])
		{
			// type.bytes = -1;
			break ;
		}
		else
			parse(format, arg, &i, &type);
	}
	va_end(arg);
	if (type.bytes != (size_t)-1)
		write(1, type.buff, type.bytes);
	if (*type.buff)
		free(type.buff);
	return (type.bytes != (size_t)-1 ? type.bytes : -1);
}
