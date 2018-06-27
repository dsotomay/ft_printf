/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:52:17 by dysotoma          #+#    #+#             */
/*   Updated: 2018/06/25 14:52:19 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hh(int *formatted, va_list arg, t_type *type, int base)
{
	(void)base;
	type->str = ft_strnew(1);
	if ((formatted[(int)'d'] || formatted[(int)'i']) == 1)
		*type->str = (char)(va_arg (arg, int));
	else
		*type->str = (unsigned char)va_arg (arg, int);
}

void	h(int *formatted, va_list arg, t_type *type, int base)
{
	if (formatted[(int)'h'] == 2)
		hh(formatted, arg, type, base);
	else
	{
		(void)base;
		type->str = ft_strnew(1);
		if ((formatted[(int)'d'] || formatted[(int)'i']) == 1)
			type->str[0] = (short)va_arg (arg, int);
		else
			type->str[0] = (unsigned short)va_arg (arg, int);
	}
}

void	ll(int *formatted, va_list arg, t_type *type, int base)
{
	// type->str = ft_strnew(1);
	if ((formatted[(int)'d'] || formatted[(int)'i']) == 1)
		type->str = ft_itoa_base(va_arg (arg, long long), base);
	else
		type->str = ft_utoa_base(va_arg (arg, unsigned long long), base);
}

void	l(int *formatted, va_list arg, t_type *type, int base)
{
	if (formatted[(int)'h'] == 2)
		ll(formatted, arg, type, base);
	else
	{
		// type->str = ft_strnew(1);
		if ((formatted[(int)'d'] || formatted[(int)'i']) == 1)
			type->str = ft_itoa_base(va_arg (arg, long), base);
		else
			type->str = ft_utoa_base(va_arg (arg, unsigned long),  base);
	}
}
