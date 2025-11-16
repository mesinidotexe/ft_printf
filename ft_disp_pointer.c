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

int ft_disp_pointer(void *ptr)
{
	unsigned long address;
	int i;

	i = 0;
	address = (unsigned long)ptr;
	while (address >= 0)
	{
		address %= 16;
		address /= 16;
		i++;
	}
	return (i);
}