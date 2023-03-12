/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:28:40 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/08 10:06:40 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	index;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	index = 0;
	while (dstsize > 0 && src[index] && ((index + len_dst) < (dstsize - 1)))
	{
		dst[index + len_dst] = src[index];
		index++;
	}
	dst[index + len_dst] = '\0';
	return (len_dst + len_src);
}
/*
int main(int argc, char **argv) 

{ 

char buffer[8] = "Tue que "; 

char *src = "fas que "; 

char ls[100];

char check[8]  = "Hey que "; 

printf("value of strlcat: %lu \n", strlcat(buffer, src, atoi(argv[1]))); 

printf("value of strlcat: %lu \n", ft_strlcat(check, src, atoi(argv[1]))); 

  

printf("Strlcat:           %s \n", buffer); 

printf("Ft_strlcat     	   %s \n", check); 

return (0); 

}*/
