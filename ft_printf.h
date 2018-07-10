/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:57:12 by dysotoma          #+#    #+#             */
/*   Updated: 2018/05/23 13:57:16 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <stdarg.h>
# include "libft/libft.h"
# define MAX_BUFF (size_t)1024 * type->count - 2

typedef	struct	s_type
{
	char	*str;
	char	*buff;
	size_t	bytes;
	int		count;
	int		width;
	int		precision;
}				t_type;

typedef	void	(*FUNC)(int *formatted, va_list arg, t_type *type, int base);

typedef	struct	s_dispatch
{
	void	(*func)(int *formatted, va_list arg, t_type *type, int base);
}				t_dispatch;

int		ft_printf(char *format, ...);
void	parse(char *format, va_list arg, int *i, t_type *type);
void	handle(char *format, va_list arg, int *i, t_type *type);
void	resize(t_type *type);
int		flags(char c);
int		length(char c);
int		specifier(char c);
void	set_specifier(int *formatted, va_list arg, t_type *type);
void	set_length(int *formatted, va_list arg, t_type *type, int base);
void	set_width(char *format, int *i, t_type *type);
int		check_length(int *formatted);
void	put_min_max_width(int *formatted, t_type *type);
void	reset(int *formatted);
void	width(int *formatted, t_type *type, int i);
FUNC	spec(int num);

/*
**	specifiers
*/

void		s(int *formatted, va_list arg, t_type *type, int base);
void		S(int *formatted, va_list arg, t_type *type, int base);
void		p(int *formatted, va_list arg, t_type *type, int base);
void		d(int *formatted, va_list arg, t_type *type, int base);
void		D(int *formatted, va_list arg, t_type *type, int base);
void		i(int *formatted, va_list arg, t_type *type, int base);
void		o(int *formatted, va_list arg, t_type *type, int base);
void		O(int *formatted, va_list arg, t_type *type, int base);
void		u(int *formatted, va_list arg, t_type *type, int base);
void		U(int *formatted, va_list arg, t_type *type, int base);
void		x(int *formatted, va_list arg, t_type *type, int base);
void		X(int *formatted, va_list arg, t_type *type, int base);
void		c(int *formatted, va_list arg, t_type *type, int base);
void		C(int *formatted, va_list arg, t_type *type, int base);
	
/*
**	length
*/

void		h(int *formatted, va_list arg, t_type *type, int base);
void		hh(int *formatted, va_list arg, t_type *type, int base);
void		l(int *formatted, va_list arg, t_type *type, int base);
void		ll(int *formatted, va_list arg, t_type *type, int base);
void		j(int *formatted, va_list arg, t_type *type, int base);
void		z(int *formatted, va_list arg, t_type *type, int base);

/*
**	flags
*/

void		hash(int *formatted, t_type *type);
void		minus_plus(int *formatted, t_type *type);

#endif
