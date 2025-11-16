/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:04:22 by vmesini-          #+#    #+#             */
/*   Updated: 2025/11/11 22:04:28 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	check_cases(char *s, va_list *args, int i)
{
	int	counter;

	counter = 0;
	if (s[i] == '%' && s[i + 1] == 'c')
		counter += ft_disp_char(va_arg(*args, int));
	if (s[i] == '%' && (s[i + 1] == 'd' ||  s[i + 1] == 'i'))
		counter += ft_disp_int(va_arg(*args, int));
	if (s[i] == '%' && s[i + 1] == 's')
		counter += ft_disp_string(va_arg(*args, char *));
	if (s[i] == '%' && s[i + 1] == 'u')
		counter += ft_disp_unsigned(va_arg(*args, unsigned int));
	if (s[i] == '%' && s[i + 1] == 'p')
		counter += ft_disp_pointer(va_arg(*args, void *));
	if (s[i] == '%' && s[i + 1] == '%')
		counter += write(1, '%', 1);
	return (counter);
}
int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	va_start(args, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			count += check_cases((char *)s, &args, i);
			i += 2;
		}
		write(1, s + i, 1);
		i++;
	}
	return (i);
}

int	main(void)
{
	// comp ft_printf.c ft_disp_char.c ft_disp_int.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_disp_string.c ft_disp_unsigned.c
	int		test1;
	char	test2;
	char	*test3;
	unsigned int test4;
	int test5;

	test1 = 5;
	test2 = 'b';
	test3 = "abcdefghijklmnopqrstuvwxyz";
	test4 = 2147483645;
	test5 = 42;
	ft_printf("Teste pra int: %d :)\nTeste pra char: %c :)\nTeste pra string: %s :)\nTeste pra unsigned: %u :)\nTeste pra pointer: %p :)", test1,
		test2, test3, test4, &test5);
	return (0);
}
