/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:07:18 by nbiescas          #+#    #+#             */
/*   Updated: 2023/05/02 12:56:29 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formats(char conv, va_list args)
{
	if (conv == 'c')
		return (print_char(va_arg(args, int)));
	if (conv == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (conv == 'p')
		return (print_address(va_arg(args, void *)));
	if (conv == 'd' || conv == 'i')
		return (ft_putstr(ft_itoa(va_arg(args, int))));
	if (conv == 'u')
		return (ft_putstr(ft_itoa(va_arg(args, unsigned long))));
	if (conv == 'x' || conv == 'X')
		return (hexadecimal_conversion(va_arg(args, unsigned long), conv));
	if (conv == '%')
		return (write(1, &"%", 1));
	return (0);
}
