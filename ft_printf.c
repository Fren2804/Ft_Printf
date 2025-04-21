/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmore <franmore@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-31 10:19:22 by franmore          #+#    #+#             */
/*   Updated: 2025-01-31 10:19:22 by franmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

/// @brief This function controls the different types of data that printf can
/// print
/// @param args The type of structure I use to handle the length of variable 
///arguments is va_list
/// @param str The string of characters that we pass to printf
/// @param counter The counter that keeps track of the number of 
///printed characters
static void	ft_control_printf(va_list args, char const *str, int *counter)
{
	if (*str == '%')
		ft_putchar(*str, counter);
	else if (*str == 'c')
		ft_putchar((char) va_arg(args, int), counter);
	else if (*str == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (*str == 'p')
		ft_putptr((unsigned long) va_arg(args, void *), counter);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_base(va_arg(args, int), "0123456789", counter);
	else if (*str == 'u')
		ft_putnbr_base_ptr((unsigned long) va_arg(args, unsigned int),
			"0123456789", counter);
	else if (*str == 'x')
		ft_putnbr_base_ptr(va_arg(args, unsigned int), H_LOW, counter);
	else if (*str == 'X')
		ft_putnbr_base_ptr(va_arg(args, unsigned int), H_HIGH, counter);
	else if (*str == '\0')
		return ;
	else
	{
		write (1, "%", 1);
		(*counter)++;
	}
	return ;
}

/// @brief Esta funcion controla que no termine % sin nada más
/// @param str La cadena que le paso al printf
/// @return devuelve 1 si hay error y 0 si no
static int	ft_control_final(char const *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str) - 1;
	if (len >= 0)
	{
		while (str[len - i] == '%')
			i ++;
	}
	if (i % 2 == 0)
		return (0);
	else
		return (1);
}

/// @brief My main function of printf
/// @param str The string of characters that we pass
/// @param  The variable arguments
/// @return The number of printed characters
int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		counter;

	va_start(args, str);
	counter = 0;
	if (ft_control_final(str))
		return (-1);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str ++;
			ft_control_printf(args, str, &counter);
		}
		else
			ft_putchar(*str, &counter);
		if (*str != '\0')
			str ++;
	}
	va_end(args);
	return (counter);
}
