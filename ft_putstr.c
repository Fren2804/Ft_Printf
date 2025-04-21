/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmore <franmore@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-31 10:59:22 by franmore          #+#    #+#             */
/*   Updated: 2025-01-31 10:59:22 by franmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/// @brief This funcition print a string
/// @param str The string to print
/// @param counter The counter that keeps track of the number of 
///printed characters
void	ft_putstr(char *str, int *counter)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	i = 0;
	while (str[i] != '\0')
	{
		(*counter)++;
		write(1, &str[i], 1);
		i ++;
	}
}
