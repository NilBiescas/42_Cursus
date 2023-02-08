/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:53:25 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/06 18:03:24 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	while (((*str >= '\t' && *str <= '\r') || *str == ' ') && *str != '\0')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{	
		number = number * 10 + (*str - 48);
		str++;
	}	
	return (number * sign);
}