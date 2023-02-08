/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:32:30 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/07 16:43:05 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <libft.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	
	ptr = malloc((len + 1) * sizeof(char));
	if (*ptr)
		return (NULL);
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
/*
int main(int argc, char **argv)
{
	printf("Substring:%s", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
	return (0);
}*/
