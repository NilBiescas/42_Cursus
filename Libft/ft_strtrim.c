/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:54:19 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/06 16:24:45 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	index;
	size_t	len_new;
	
	index = 0;
	while (s1[index] != '\0' && ft_strchr(set, s1[index]))
		index++;
	len_new = ft_strlen(s1);
	while (ft_strrchr(set,s1[len_new]) && len_new)
		len_new--;
	return (ft_substr(&s1[index], 0, (len_new - index) + 1));
}

int main(int argc, char **argv)
{
	printf("Result %s", ft_strtrim(argv[1], argv[2]));
	return (0);
}
