/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:25:03 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/07 17:00:46 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc((len + 1) * sizeof(char));
	if (*ptr)
		return (NULL);
	strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}

int	get_words(char const *s, char c)
{
	size_t	index;
	int		count;

	index = 0;
	count = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (s[index + 1] == c || s[index + 1] == '\0'))
			count++;
		index++;
	}
	return (count);
}

size_t get_next_char(char const *s, char c)
{
	size_t	index;

	index = 0;
	while (s[index] == c && s[index] != '\0')
		index++;
	return (index);
}


size_t	char_words(char const *s, char c)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0' && s[index] != c)
		index++;
	return (index);
}

char    **ft_split(char const *s, char c)
{
    char 	**list_string;
	size_t	words;
	size_t	index;
	size_t	len_word;
	size_t	pos;

	len_word = 0;
	index = 0;
	pos = 0;
	words = get_words(s, c);
	list_string = malloc(sizeof(char *) * (words + 1));
	while (pos < (words))
	{
		index = index + get_next_char(&s[index], c);
		len_word = char_words(&s[index], c);
		list_string[pos] = ft_substr(&s[index], 0, len_word);
		index = index + len_word;
		pos++;
	}
	list_string[pos] = NULL;
    return (list_string);
}

int main(int argc, char **argv)
{
	char **words;

	words = ft_split(argv[1], argv[2][0]);
	while (*words != NULL)
	{
		printf("%s \n", (*words));
		words++;
	}
	printf("%s \n", (*words));
	return (0);
}
