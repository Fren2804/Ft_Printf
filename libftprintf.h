/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmore <franmore@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-31 10:18:31 by franmore          #+#    #+#             */
/*   Updated: 2025-01-31 10:18:31 by franmore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# define H_LOW "0123456789abcdef"
# define H_HIGH "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(char *str, int *counter);
void	ft_putptr(unsigned long p, int *counter);
void	ft_putnbr_base(int nbr, char *base, int *counter);
void	ft_putnbr_base_ptr(unsigned long nbr, char *base, int *counter);
size_t	ft_strlen(const char *str);

#endif