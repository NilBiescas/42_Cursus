/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:13:54 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/21 09:56:58 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		index;
	size_t		len_s;
	const char	*ptr_char;

	len_s = ft_strlen(s);
	ptr_char = 0;
	index = 0;
	while (index <= len_s)
	{
		if (s[index] == (char )c)
			ptr_char = &s[index];
		index++;
	}
	return ((char *)ptr_char);
}
/*
 *
 *
int main(int argc, char **argv)
{
	printf("%p \n", ft_strrchr(argv[1], 'a'));
	printf("%p \n", strrchr(argv[1], 'a'));
	return (0);
}*/
