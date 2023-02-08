/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:37:47 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/08 15:21:22 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strmapi(char const *s, char *f(unsigned int, char))
{
	size_t	len_s;
	char	*ptr;
	size_t	index;

	index = 0;
	len_s = strlen(s);
	ptr = malloc(sizeof(char) * (len_s + 1));	
	if (!ptr)
		return (NULL);
	while (s[index] != '\0')
	{
		ptr[index] = *(*f)(index, s[index]);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

int main(int argc, char **argv)
{
	printf("%s \n", ft_strmapi(argv[1], te_cagao));
	return (0);
}
/*(*f) is a function, that returns a pointer to a char.
 * We then reference the pointer and we put the character in the alocatet
 * space. 
 */
