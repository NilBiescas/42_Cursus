/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:37:51 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/21 09:55:34 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (char)c)
			break ;
		index++;
	}
	if (s[index] == (char)c)
		return ((char *)&s[index]);
	return ((char *)0);
}

/*
 * Iterate the string until null termianted character. If we find the match
 * go out and return the postion.
 * If the run the process until the null terimanted character
 * check if what we are looking is the null character or it means that the 
 * character is not in the string.
 
int main(int argc, char **argv)
{

	printf("%s \n", ft_strchr(argv[1], argv[2][0]));
	printf("%s \n", strchr(argv[1], argv[2][0]));
	return (0);
}*/
