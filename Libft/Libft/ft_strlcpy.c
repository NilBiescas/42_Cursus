/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:21:03 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/06 18:04:35 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	while (src && (dstsize - 1))
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize)
		*dst = '\0';
	return (srcsize);
}

/*
int main(int argc , char **argv)
{
	printf("%lu \n", strlcpy(argv[1], argv[2], atoi(argv[3])));
	printf("Destino strlcpy: %s \n", argv[1]);
	printf("Soruce strlcpy: %s \n", argv[2]);
	printf("%lu \n", ft_strlcpy(argv[4], argv[5], atoi(argv[3])));
	printf("Destino ft_strlcpy: %s \n", argv[4]);
	printf("Soruce ft_strlcpy: %s \n", argv[5]);

	return (0);

}
*/
