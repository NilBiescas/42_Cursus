/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:32:23 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/02 19:04:32 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destino;
	const char	*source;

	if (!dst && !src)
		return (NULL);
	destino = dst;
	source = src;
	if (destino < source)
		dst = ft_memcpy(dst, src, len);
	else if (destino == source)
	{
		while (len > 0)
		{
			destino[len - 1] = source[len - 1];
			len--;
		}
	}
	return (dst);
}

/*
int main (int argc, char **argv) {
   char *dest = argv[1];
   char *src  = argv[2];

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, atoi(argv[3]));
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
