/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmore <franmore@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-31 10:53:15 by franmore          #+#    #+#             */
/*   Updated: 2025-01-31 10:53:15 by franmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/// @brief The function to print a desired character
/// @param c The character to print
/// @param counter The counter that keeps track of the number of 
///printed characters
void	ft_putchar(char c, int *counter)
{
	(*counter)++;
	write(1, &c, 1);
}
