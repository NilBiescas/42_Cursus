/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:00:52 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/03 17:27:54 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*les;

	str = s1;
	les = s2;
	while ((n - 1) > 0)
	{
		if (*str != *les)
			return ((int)(*str - *les));
		str++;
		les++;
		n--;
	}
	return ((int)(*str - *les));
}
/*
int main (int argc, char **argv)
{
	printf("%d \n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d \n", memcmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
