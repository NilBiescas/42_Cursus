/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:21:03 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/07 11:01:58 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize < 1)
		return (ft_strlen(src));
	while (src[index] && (index < dstsize - 1))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}

/*
 * Check if the dstsize is 0, becuase if we assigned size_t variable a negative
 * number we 
 *

int main(int argc , char **argv)
{
	printf("%lu \n", strlcpy(argv[1], argv[2], atoi(argv[3])));
	printf("Destino strlcpy: %s \n", argv[1]);
	printf("Source  strlcpy: %s \n", argv[2]);
	printf("%lu \n", ft_strlcpy(argv[4], argv[5], atoi(argv[3])));
	printf("Destino ft_strlcpy: %s \n", argv[4]);
	printf("Soruce ft_strlcpy: %s \n", argv[5]);

	return (0);
}*/
