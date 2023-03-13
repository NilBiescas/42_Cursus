/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:32:30 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/07 10:46:49 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size_s;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0)
		return (ft_strdup(s));
	size_s = ft_strlen(s);
	if (start > size_s - 1)
		len = 0;
	if (len > size_s - start)
		len = size_s - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	if (len == 0)
		return (ft_memset(ptr, 0, 1));
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
/*
 * Creates space, check if s or ptr are Null if so return Null if,
 * bot are correct copy starting from start to ptr.
int main(int argc, char **argv)
{
	printf("Substring:%s", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}*/
