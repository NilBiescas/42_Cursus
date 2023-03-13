/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:00:52 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/21 09:50:39 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	if (!s1 && !s2)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && (i < n - 1))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int main (int argc, char **argv)
{
	printf("%d \n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d \n", memcmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
