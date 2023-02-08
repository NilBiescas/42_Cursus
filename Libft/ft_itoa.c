/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:16:50 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/07 19:23:07 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#define _OPEN_SYS_ITOA_EXT
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	len_int(int n)
{	
	int len_n;

	len_n = 0;
	while (n)
	{
		n = n / 10;
		len_n++;
	}
	return (len_n);
}

char *reverse(char *ptr)
{
	size_t	index;
	size_t	index2;
	char	*second;
	char	aux;

	aux = 0;
	index = 0; 
	index2 = 0;
	second = ptr;
	while(second[index2 + 1])
		index2++;
	while (&ptr[index] < &second[index2])
	{
		aux = ptr[index];
		ptr[index] = second[index2];
		second[index2] = aux;
		index++;
		index2--;
	}
	return (ptr);
}

char *ft_itoa(int n)
{
	char	*ptr;
	size_t	index;
	int		len_n;
	size_t	bol;

	bol = 0;
	index = 0;
	if (n < 0)
	{
		n *= -1;
		bol = 1;
	}
	len_n = len_int(n);
	ptr = malloc(sizeof(char) * (len_n + 1 + bol));
	if (!ptr)
		return (NULL);
	while (n)
	{
		ptr[index] = (n % 10) + 48;
		n = n / 10;
		index++;
	}
	if (bol)
		ptr[index++] = '-';
	ptr[index] = '\0';
	ptr = reverse(ptr);
	return (ptr);
}

int main(int argc, char **argv)
{
	printf("%s \n", ft_itoa(atoi(argv[1])));
	return (0);
}
