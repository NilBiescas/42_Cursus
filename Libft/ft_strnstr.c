/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:36:02 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/06 18:24:45 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		hays;
	size_t	nedl_len;
	int		max_len;

	if (!*needle)
		return ((char *)haystack);
	hays = 0;
	nedl_len = strlen(needle);
	max_len = (int)(len - nedl_len);
	while (haystack[hays] && (hays <= max_len))
	{
		if (strncmp(&haystack[hays], needle, nedl_len) == 0)
			return ((char *)&haystack[hays]);
		hays++;
	}
	return ((char *) '\0');
}
/*
int main (int argc, char **argv)
{
	printf("ft_strnstr: %s \n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("strnstr:    %s \n", strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}*/
