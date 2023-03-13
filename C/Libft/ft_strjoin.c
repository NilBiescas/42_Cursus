/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:44:46 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/07 11:05:33 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*ptr;

	if (!s1 | !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ptr = (char *)malloc((lens1 + lens2) + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, lens1 + 1);
	ft_strlcat(ptr, s2, (lens1 + lens2 + 1));
	return (ptr);
}
/*
 *
 * Check if s1 are s2 are strings. If that's okey create memory, for 
 * storing s1 and s2. Copy s1 into ptr using strlcpy, null terminating the
 * string. After that concatenate s2 into ptr starting in the null terminating
 * character.

 int main(int argc, char **argv)
{
	printf("Strjoin: %s", ft_strjoin(argv[1], argv[2]));
	return (0);

}*/
