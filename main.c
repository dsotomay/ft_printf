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
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <limits.h>

int	main(int ac,  char **av)
{
	// wchar_t wz [3] = L"@@";
	// wchar_t		c = L'\x82';

	// int         r00 = 0;
    // fpos_t      pos;
    // FILE        *fpin, *fpout;
    // int         fdin, fdout;
    // int         fd = dup(fileno(stdout));
    // unsigned char a = -125;
    // unsigned int b = -125;
    // unsigned long c = -125;
    // unsigned short d = -125;
    // size_t e = -125;
    // uintmax_t f = -125;
    // unsigned long long  g = -125;

    // unsigned char h = 0;
    // unsigned int i = 0;
    // unsigned long j = 0;
    // unsigned short k = 0;
    // size_t l = 0;
    // uintmax_t m = 0;
    // unsigned long long n = 0;

    // unsigned char o = (unsigned char)~0U>>1;
    // unsigned int p = ~0U>>1;
    // unsigned long q = ~0U>>1;
    // unsigned short r = (short)~0U>>1;
    // size_t s = (size_t)~0U>>1;
    // uintmax_t t = (uintmax_t)~0U>>1;
    // unsigned long long u = (unsigned long long)~0U>>1;

    // unsigned char v = -m-1;
    // unsigned int w = -n-1;
    // unsigned long x = -o-1;
    // unsigned short y = -p-1;
    // unsigned long z = -q-1;
    // uintmax_t zz = -r-1;
    // unsigned long long aa = -r-1;
	// // unsigned int	*p = 2147483648;
	// printf("%p\n", av[2]);

	if (ac)
	{
		// ft_printf("%C\n", c);
		// ft_printf("%C\n", L'ø');
		
		// printf("%C\n", c);
		// printf("%C\n", L'ø');

		// ft_printf("mines %ls", wz);
		// puts("theirs\n"); 
		// printf("%ls", wz); 

		// ft_printf("%d", 42);
		// ft_printf("Kashim a %d histoires à raconter", 1001);
		// ft_printf("Il fait au moins %d\n", -8000);
		// ft_printf("%d", -0);
		// ft_printf("%d", 0);
		// ft_printf("%d", INT_MAX);
		// ft_printf("%d", INT_MIN);
		// ft_printf("%d", INT_MIN - 1);
		// ft_printf("%d", INT_MAX + 1);
		// ft_printf("%%d 0000042 == |%d|\n", 0000042);
		// ft_printf("%%d \t == |%d|\n", '\t');
		// ft_printf("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');

		// printf("%d", 42);
		// printf("Kashim a %d histoires à raconter", 1001);
		// printf("Il fait au moins %d\n", -8000);
		// printf("%d", -0);
		// printf("%d", 0);
		// printf("%d", INT_MAX);
		// printf("%d", INT_MIN);
		// printf("%d", INT_MIN - 1);
		// printf("%d", INT_MAX + 1);
		// printf("%%d 0000042 == |%d|\n", 0000042);
		// printf("%%d \t == |%d|\n", '\t');
		// printf("%%d Lydie == |%d|\n", 'L'+'y'+'d'+'i'+'e');
    	
		// ft_printf("unsigned char        a = %hhu sizeof a = %lu\n", a,sizeof(a));
    	// ft_printf("unsigned int     b = %u sizeof b = %lu\n",b,sizeof(b));
    	// ft_printf("unsigned long        c = %lu sizeof c = %lu\n",c,sizeof(c));
    	// ft_printf("unsigned short       d = %hu sizeof d = %lu\n",d,sizeof(d));
    	// ft_printf("size_t           e = %zu sizeof e = %lu\n",e,sizeof(e));
    	// ft_printf("uintmax_t        f = %ju sizeof f = %lu\n",f,sizeof(f));
    	// ft_printf("unsigned long long   g = %llu sizeof g = %lu\n\n",g,sizeof(g));	
    	// ft_printf("unsigned char        h = %hhu sizeof h = %lu\n", h,sizeof(h));
    	// ft_printf("unsigned int     i = %u sizeof i = %lu\n",i,sizeof(i));
    	// ft_printf("unsigned long        j = %lu sizeof j = %lu\n",j,sizeof(j));
    	// ft_printf("unsigned short       k = %hu sizeof k = %lu\n",k,sizeof(k));
    	// ft_printf("size_t           l = %zu sizeof l = %lu\n",l,sizeof(l));
    	// ft_printf("uintmax_t        m = %ju sizeof m = %lu\n",m,sizeof(m));
    	// ft_printf("unsigned long long   n = %llu sizeof n = %lu\n\n",n,sizeof(n));
    	// ft_printf("unsigned char        o = %hhu sizeof o = %lu\n", o,sizeof(o));
    	// ft_printf("unsigned int     p = %u sizeof p = %lu\n",p,sizeof(p));
    	// ft_printf("unsigned long        q = %lu sizeof q = %lu\n",q,sizeof(q));
    	// ft_printf("unsigned short       r = %hu sizeof r = %lu\n",r,sizeof(r));
    	// ft_printf("size_t           s = %zu sizeof s = %lu\n",s,sizeof(s));
    	// ft_printf("uintmax_t        t = %ju sizeof t = %lu\n",t,sizeof(t));
    	// ft_printf("unsigned long long   u = %llu sizeof u = %lu\n\n",u,sizeof(u));
    	// ft_printf("unsigned char        v = %hhu sizeof v = %lu\n", v,sizeof(v));
    	// ft_printf("unsigned int     w = %u sizeof w = %lu\n",w,sizeof(w));
    	// ft_printf("unsigned long        x = %lu sizeof x = %lu\n",x,sizeof(x));
    	// ft_printf("unsigned short       y = %hu sizeof y = %lu\n",y,sizeof(y));
    	// ft_printf("size_t           z = %zu sizeof z = %lu\n",z,sizeof(z));
    	// ft_printf("uintmax_t        zz = %ju sizeof zz = %lu\n",zz,sizeof(zz));
    	// ft_printf("unsigned long long   aa = %llu sizeof aa = %lu\n\n",aa,sizeof(aa));
    	// printf("unsigned char        a = %hhu sizeof a = %lu\n", a,sizeof(a));
    	// printf("unsigned int     b = %u sizeof b = %lu\n",b,sizeof(b));
    	// printf("unsigned long        c = %lu sizeof c = %lu\n",c,sizeof(c));
    	// printf("unsigned short       d = %hu sizeof d = %lu\n",d,sizeof(d));
    	// printf("size_t           e = %zu sizeof e = %lu\n",e,sizeof(e));
    	// printf("uintmax_t        f = %ju sizeof f = %lu\n",f,sizeof(f));
    	// printf("unsigned long long   g = %llu sizeof g = %lu\n\n",g,sizeof(g));	
    	// printf("unsigned char        h = %hhu sizeof h = %lu\n", h,sizeof(h));
    	// printf("unsigned int     i = %u sizeof i = %lu\n",i,sizeof(i));
    	// printf("unsigned long        j = %lu sizeof j = %lu\n",j,sizeof(j));
    	// printf("unsigned short       k = %hu sizeof k = %lu\n",k,sizeof(k));
    	// printf("size_t           l = %zu sizeof l = %lu\n",l,sizeof(l));
    	// printf("uintmax_t        m = %ju sizeof m = %lu\n",m,sizeof(m));
    	// printf("unsigned long long   n = %llu sizeof n = %lu\n\n",n,sizeof(n));
    	// printf("unsigned char        o = %hhu sizeof o = %lu\n", o,sizeof(o));
    	// printf("unsigned int     p = %u sizeof p = %lu\n",p,sizeof(p));
    	// printf("unsigned long        q = %lu sizeof q = %lu\n",q,sizeof(q));
    	// printf("unsigned short       r = %hu sizeof r = %lu\n",r,sizeof(r));
    	// printf("size_t           s = %zu sizeof s = %lu\n",s,sizeof(s));
    	// printf("uintmax_t        t = %ju sizeof t = %lu\n",t,sizeof(t));
    	// printf("unsigned long long   u = %llu sizeof u = %lu\n\n",u,sizeof(u));
    	// printf("unsigned char        v = %hhu sizeof v = %lu\n", v,sizeof(v));
    	// printf("unsigned int     w = %u sizeof w = %lu\n",w,sizeof(w));
    	// printf("unsigned long        x = %lu sizeof x = %lu\n",x,sizeof(x));
    	// printf("unsigned short       y = %hu sizeof y = %lu\n",y,sizeof(y));
    	// printf("size_t           z = %zu sizeof z = %lu\n",z,sizeof(z));
    	// printf("uintmax_t        zz = %ju sizeof zz = %lu\n",zz,sizeof(zz));
    	// printf("unsigned long long   aa = %llu sizeof aa = %lu\n\n",aa,sizeof(aa));

		// ft_printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");
		// ft_printf("%% 4.5i 42 == |% 4.5i|\n", 42);
		// ft_printf("%%04.5i 42 == |%04.5i|\n", 42);
		// ft_printf("%%04.3i 42 == |%04.3i|\n", 42);
		// ft_printf("%%04.2i 42 == |%04.2i|\n", 42);

		// printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");
		// printf("%% 4.5i 42 == |% 4.5i|\n", 42);
		// printf("%%04.5i 42 == |%04.5i|\n", 42);
		// printf("%%04.3i 42 == |%04.3i|\n", 42);
		// printf("%%04.2i 42 == |%04.2i|\n", 42);

		// printf("\nbytes returned = %i\n: ", ft_printf("mine = %d", 0));
		// printf("real printf = |%-7.3o|", 42);
		// printf("%0.12d", 2147483647);
		//need to handle %5%
	}
}
