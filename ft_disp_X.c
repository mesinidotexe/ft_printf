/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:33:44 by vmesini-          #+#    #+#             */
/*   Updated: 2025/11/17 15:33:45 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned int nbr)
{
	char	*base;
	int		i;
	int		value;

	i = 0;
	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_putnbr_x(nbr / 16);
	}
	value = base[nbr % 16];
	i += write(1, &value, 1);
	return (i);
}
