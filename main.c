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
		ft_printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");
		ft_printf("%% 4.5i 42 == |% 4.5i|\n", 42);
		ft_printf("%%04.5i 42 == |%04.5i|\n", 42);
		ft_printf("%%04.3i 42 == |%04.3i|\n", 42);
		ft_printf("%%04.2i 42 == |%04.2i|\n", 42);

		printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");
		printf("%% 4.5i 42 == |% 4.5i|\n", 42);
		printf("%%04.5i 42 == |%04.5i|\n", 42);
		printf("%%04.3i 42 == |%04.3i|\n", 42);
		printf("%%04.2i 42 == |%04.2i|\n", 42);

		printf("\nbytes returned = %i\n: ", ft_printf("mine = %d", 0));
		printf("real printf = |%-7.3o|", 42);
		printf("%0.12d", 2147483647);
		//need to handle %5%
	}
}
