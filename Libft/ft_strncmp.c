/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:40:07 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/03 17:26:52 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*second;

	str = s1;
	second = s2;
	while (*str && *second && (n - 1 > 0))
	{
		if (*str != *second)
			return ((int)(*second - *second));
		str++;
		second++;
		n--;
	}
	return ((int)(*str - *second));
}

/*
int main (int argc, char **argv)
{
	printf("%d \n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d \n", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
