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
	if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i'))
		counter += ft_disp_int(va_arg(*args, int));
	if (s[i] == '%' && s[i + 1] == 's')
		counter += ft_disp_string(va_arg(*args, char *));
	if (s[i] == '%' && s[i + 1] == 'u')
		counter += ft_disp_unsigned(va_arg(*args, unsigned int));
	if (s[i] == '%' && s[i + 1] == 'p')
		counter += ft_disp_pointer(va_arg(*args, unsigned long long));
	if (s[i] == '%' && s[i + 1] == 'x')
		counter += ft_disp_x(va_arg(*args, unsigned int));
	if (s[i] == '%' && s[i + 1] == 'X')
		counter += ft_disp_xx(va_arg(*args, unsigned int));
	if (s[i] == '%' && s[i + 1] == '%')
	{
		counter += 1;
		write(1, "%", 1);
	}
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
