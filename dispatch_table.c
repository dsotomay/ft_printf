/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 19:14:28 by dysotoma          #+#    #+#             */
/*   Updated: 2018/06/24 19:14:32 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static	FUNC	flag(FUNC func[], int num)
// {
// 	func[(int)'#'] = hash;
// 	func[(int)'0'] = zero;
// 	func[(int)'-'] = minus;
// 	func[(int)'+'] = plus;
// 	func[(int)' '] = space;
// 	return (func[num]);
// }

static	FUNC	leng(FUNC func[], int num)
{
	func[(int)'h'] = h;
	func[(int)'l'] = l;
	func[(int)'j'] = j;
	func[(int)'z'] = z;
	return (func[num]);
}

FUNC			spec(int num)
{
	static FUNC	func[128];
	if (specifier((char)num))
	{
		func[(int)'s'] = s;
		func[(int)'S'] = S;
		func[(int)'p'] = p;
		func[(int)'d'] = d;
		// func[(int)'D'] = D;
		func[(int)'i'] = i;
		func[(int)'o'] = o;
		// func[(int)'O'] = O;
		func[(int)'u'] = u;
		// func[(int)'U'] = U;
		func[(int)'x'] = x;
		// func[(int)'X'] = X;
		func[(int)'c'] = c;
		func[(int)'C'] = C;
		return (func[num]);
	}
	if (length((char)num))
		return (leng(func, num));
	// if (flags((char)num))
	// 	return (flag(func, num));
	return (0);
}
