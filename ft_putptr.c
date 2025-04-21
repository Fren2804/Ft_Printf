/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmore <franmore@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-31 11:03:44 by franmore          #+#    #+#             */
/*   Updated: 2025-01-31 11:03:44 by franmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/// @brief This function prints the pointer address in hexadecimal
/// @param n The number to print
/// @param counter The counter that keeps track of the number of 
///printed characters
void	ft_putptr(unsigned long n, int *counter)
{
	if (n == 0)
	{
		ft_putstr("(nil)", counter);
		return ;
	}
	*counter += 2;
	write(1, "0x", 2);
	ft_putnbr_base_ptr(n, H_LOW, counter);
}
