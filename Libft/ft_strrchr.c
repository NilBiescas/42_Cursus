/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:13:54 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/03 17:22:47 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t		len_s;
	const char	*ptr_char;

	ptr_char = (const char *) '\0';
	len_s = strlen(s) + 1;
	while (len_s)
	{
		if ((int)*s == c)
			ptr_char = s;
		s++;
		len_s--;
	}
	return ((char *)ptr_char);
}
/*
int main(int argc, char **argv)
{
	printf("%p \n", ft_strrchr(argv[1], 0));
	printf("%p \n", strrchr(argv[1], 0));
	return (0);
}
*/
