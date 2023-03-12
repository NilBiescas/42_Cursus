/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:16:50 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/07 12:50:36 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenitoa(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_nummax(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		mod;

	mod = 0;
	len = ft_lenitoa(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	while (n)
	{
		len--;
		mod = ft_nummax(n % 10);
		result[len] = mod + '0';
		n = n / 10;
	}
	return (result);
}

/*
int main(int argc, char **argv)
{
	printf("%s \n", ft_itoa(atoi(argv[1])));
	return (0);
}*/
