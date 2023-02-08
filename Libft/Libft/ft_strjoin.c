/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:44:46 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/03 18:55:37 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*ptr;

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	ptr = malloc((lens1 * lens2) + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, lens1 + 1);
	ft_strlcat(ptr, s2, (lens1 + lens2 + 1));
	return (ptr);
}
/*
int main(int argc, char **argv)
{
	printf("Strjoin: %s", ft_strjoin(argv[1], argv[2]));
	return (0);

}*/
