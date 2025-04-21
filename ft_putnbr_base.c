/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmore <franmore@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-31 11:27:56 by franmore          #+#    #+#             */
/*   Updated: 2025-01-31 11:27:56 by franmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/// @brief This function converts the number into a string
/// @param nbr The number to convert
/// @param base The base to convert the number
/// @param len The lenght of the base
/// @param digits Where the digits will be stored
static void	ft_obtain_digits(int nbr, char *base, int len, char *digits)
{
	int	a;
	int	b;
	int	f;

	b = 0;
	while (nbr != 0)
	{
		a = nbr % len;
		if (a < 0)
			a = -a;
		f = base[a];
		digits[b] = f;
		nbr = nbr / len;
		b ++;
	}
	digits[b] = '\0';
}

/// @brief This function print 0
/// @param counter The counter that keeps track of the number of 
///printed characters
static void	ft_nbr_0(int *counter)
{
	(*counter)++;
	write (1, "0", 1);
}

/// @brief This function print a int number
/// @param nbr The number to print
/// @param base The base to convert the number
/// @param counter The counter that keeps track of the number of 
///printed characters
void	ft_putnbr_base(int nbr, char *base, int *counter)
{
	int		len;
	char	digits[11];
	int		i;

	i = 0;
	len = ft_strlen(base);
	if (nbr == 0)
		ft_nbr_0(counter);
	if (nbr < 0)
	{
		(*counter)++;
		write(1, "-", 1);
	}
	ft_obtain_digits(nbr, base, len, digits);
	while (digits[i] != '\0')
		i ++;
	i --;
	while (i >= 0)
	{
		(*counter)++;
		write (1, digits + i, 1);
		i --;
	}
}
