/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:38:22 by nbiescas          #+#    #+#             */
/*   Updated: 2023/05/02 12:58:04 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	char	letter;

	letter = c;
	return (write(1, &letter, 1));
}

int	ft_putstr(char *argument)
{
	size_t	i;

	i = 0;
	while (argument[i] != '\0')
		if (write(1, &argument[i++], 1) == -1)
			return (-1);
	return (i);
}

int	print_address(void *adress)
{
	unsigned long	p;
	int				size;

	p = (unsigned long)adress;
	if (ft_putstr("0x") == -1)
		return (-1);
	size = hexadecimal_conversion(p, 'x');
	if (size == -1)
		return (-1);
	return (size + 2);
}
