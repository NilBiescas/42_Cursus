/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:54:19 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/21 09:57:07 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	len_new;

	index = 0;
	if (!s1 || !set)
		return (NULL);
	len_new = ft_strlen(s1);
	while (s1[index] != '\0' && ft_strchr(set, s1[index]))
		index++;
	while (ft_strrchr(set, s1[len_new]) && len_new)
		len_new--;
	return (ft_substr(&s1[index], 0, (len_new - index) + 1));
}
/*
 *Check s1 and set. Advanced until either the end of the string, or the firts
 character that appears in set. Do the same but going backwards, Ensure that
 you dont go out of the string with the len of s1. After that you have the 
 start index and the end index of the new string. Use ft_substr, to create
 the new string.
 *
int main(int argc, char **argv)
{
	printf("Result %s", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/
