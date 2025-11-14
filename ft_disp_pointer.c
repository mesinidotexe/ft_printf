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
	char *address;
	int i;
	
	address = (char *)&ptr;
	i = 0;
	while (address[i])
	{
		write(1, &address, 1);
		i++;
	}
	return (i);
}