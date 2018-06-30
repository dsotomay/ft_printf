/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_fun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 19:26:46 by dysotoma          #+#    #+#             */
/*   Updated: 2018/06/27 19:26:49 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void		hash(int *formatted, va_list arg, t_type *type, int base)
// {
// 	char *str;

// 	(void)base;
// 	if (formatted[(int)'o'])
// 		str = "0";
	
// 	type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, str,ft_strlen(str)));
// }
void	minus_plus(int *formatted, t_type *type)
{
	if (type->str[0] == '-')
	{
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, "-", 1));
		type->str++;
	}
	else if (formatted[43] && (formatted[(int)'d'] || formatted[(int)'i']))
		type->bytes += ft_strlen(ft_strncpy(type->buff + type->bytes, "+", 1));
}

