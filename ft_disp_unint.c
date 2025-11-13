/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_unint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:41:47 by vmesini-          #+#    #+#             */
/*   Updated: 2025/11/13 19:41:50 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_check_digits(int n)
{
	int	digits;

	digits = 1;
	while (n >= 10)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}
void	ft_put_unsigned_nbr(unsigned int n)
{
	if (n >= 10)
	{
		ft_put_unsigned_nbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int	ft_disp_unint(unsigned int nbr)
{
	ft_put_unsigned_nbr(nbr);
	return (ft_check_digits(nbr));
}