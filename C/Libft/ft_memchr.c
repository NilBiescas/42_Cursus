/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:14:29 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/07 11:32:49 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_char;

	ptr_char = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_char[i] == (unsigned char)c)
			return ((void *)&ptr_char[i]);
		i++;
	}
	return (NULL);
}

/*
int main (int argc, char **argv)
{
	printf("%s \n", ft_memchr(argv[1], argv[2][0], (size_t)atoi(argv[3])));
	printf("%s \n", memchr(argv[1], argv[2][0], (size_t)atoi(argv[3])));
	return (0);
}*/
