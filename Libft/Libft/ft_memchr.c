/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:14:29 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/03 17:25:35 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_char;

	ptr_char = (const unsigned char *) s;
	while (n)
	{
		if (*ptr_char == (unsigned char)c)
		{
			return ((void *)ptr_char);
		}
		ptr_char++;
		n--;
	}
	return ((void *)0);
}
/*
int main (int argc, char **argv)
{
	printf("%s \n", ft_memchr(argv[1], atoi(argv[2]), (size_t)atoi(argv[3])));
	printf("%s \n", memchr(argv[1], atoi(argv[2])   , (size_t)atoi(argv[3])));
	return (0);
}*/
