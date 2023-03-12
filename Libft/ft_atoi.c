/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:53:25 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/17 11:09:40 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		number;
	size_t	i;

	i = 0;
	number = 0;
	sign = 1;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		&& str[i] != '\0')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{	
		number = number * 10 + (str[i] - 48);
		i++;
	}	
	return (number * sign);
}
