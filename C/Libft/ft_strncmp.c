/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:40:07 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/21 09:56:26 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	if ((s1[ind] == '\0' && s2[ind] == '\0') || n == 0)
		return (0);
	while (s1[ind] == s2[ind] && (ind < n - 1) && s1[ind] && s2[ind])
		ind++;
	return ((unsigned char)s1[ind] - (unsigned char)s2[ind]);
}

/*
int main (int argc, char **argv)
{
	printf("%d \n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d \n", strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
