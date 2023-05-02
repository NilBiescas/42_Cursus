/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:06:14 by nbiescas          #+#    #+#             */
/*   Updated: 2023/05/02 12:58:29 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_utils(char const *sentence, va_list args)
{
	size_t	i;
	int		sum;
	int		size;

	size = 0;
	sum = 0;
	i = 0;
	while (sentence[i] != '\0')
	{
		if (sentence[i] == '%' && sentence[i + 1] != '\0')
		{
			size = formats(sentence[i + 1], args);
			i = i + 1;
		}
		else
			size = write(1, &sentence[i], 1);
		if (size == -1)
			return (-1);
		sum += size;
		i++;
	}
	return (sum);
}

int	ft_printf(char const *sentence, ...)
{
	int		size;
	va_list	args;

	va_start(args, sentence);
	size = ft_utils(sentence, args);
	va_end(args);
	return (size);
}
