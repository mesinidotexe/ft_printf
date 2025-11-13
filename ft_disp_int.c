/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:21:57 by vmesini-          #+#    #+#             */
/*   Updated: 2025/11/13 18:22:06 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_check_digits(int n)
{
	int	digits;

	digits = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

int	ft_disp_int(int nbr)
{
	ft_putnbr(nbr);
	return (ft_check_digits(nbr));
}
