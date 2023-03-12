/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:36:02 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/07 12:26:54 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *srch, size_t n)
{
	size_t	i;
	size_t	j;
	char	*t_str;
	char	*t_srch;

	i = 0;
	j = 0;
	t_str = (char *)str;
	t_srch = (char *)srch;
	if (t_srch[j] == '\0')
		return (t_str);
	while (t_str[i] && i < n)
	{
		j = 0;
		if (t_str[i] == t_srch[j])
		{
			while (t_srch[j] && (i + j < n) && (t_str[i + j] == t_srch[j]))
				j++;
			if (t_srch[j] == '\0')
				return (&t_str[i]);
		}
		i++;
	}
	return (0);
}
/*
int main (int argc, char **argv)
{
	printf("ft_strnstr: %s \n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("strnstr:    %s \n", strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
