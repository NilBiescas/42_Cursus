/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:37:51 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/02 20:41:55 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	size_t		len_s;
	const char	*ptr_char;

	ptr_char = (const char *) '\0';
	len_s = strlen(s) + 1;
	while (len_s)
	{
		if ((char)*s == (char)c)
		{	
			ptr_char = s;
			return ((char *)ptr_char);
		}
		s++;
		len_s--;
	}
	return ((char *)ptr_char);
}

/*
int main(int argc, char **argv)
{

	printf("%p \n", ft_strchr(argv[1], '\0'));
	printf("%p \n", strchr(argv[1], '\0'));
	return (0);
}*/
