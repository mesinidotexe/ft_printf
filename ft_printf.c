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
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	disp_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}

int disp_string(va_list args)
{
	char *string = (char *)va_arg(args, long);
	return (write("%s", string));
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int count = 0;

	va_start(args, s);
	int i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] == 'c')
		{	
			count += disp_char(args);
		}
		else if (s[i] == '%' && s[i + 1] != 'c')
		{
			break;
		}
		write (1, s + i, 1);
		i++;
	}
	return (i);
}

int	main(void)
{
	char str[] = "oahsdihoasdohihoadis";
	printf("%d", printf("blabla %s\n", str));
	return (0);
}
