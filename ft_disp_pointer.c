/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:40:55 by vmesini-          #+#    #+#             */
/*   Updated: 2025/11/13 22:40:56 by vmesini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_disp_pointer(unsigned long long nbr)
{
	int counter;

	counter = 0;
	if (!nbr)
		return (0);
	counter += write(1, "0x", 2);
	counter += ft_putnbr_hex(nbr);
	return (counter);
}