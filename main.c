/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:56:27 by dysotoma          #+#    #+#             */
/*   Updated: 2018/05/23 13:56:32 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(int ac,  char **av)
{
	// unsigned int	*p = 2147483648;
	printf("%p\n", av[2]);

	if (ac)
	{
		printf("\nbytes returned = %i\n: ", ft_printf("%d", 42));
		printf("real printf = |%-7.3o|", 42);
		printf("%d", 42);
		//need to handle %5%
	}
}
