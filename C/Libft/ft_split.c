/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:25:03 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/21 09:55:26 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_words(char const *s, char c)
{
	size_t	index;
	size_t	count;

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

static void	ft_free(char **list_string)
{
	size_t	i;

	i = 0;
	while (list_string[i])
	{
		free(list_string[i]);
		list_string[i] = NULL;
		i++;
	}
	free(list_string);
}

static char	**words(char **list_string, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	pos;

	pos = 0;
	start = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			list_string[pos] = ft_substr(s, start, i - start + 1);
			if (list_string[pos] == NULL)
			{		
				ft_free(list_string);
				return (0);
			}
			pos++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}	
	list_string[pos] = NULL;
	return (list_string);
}

char	**ft_split(char const *s, char c)
{
	char	**list_string;
	size_t	pos;

	pos = 0;
	if (!s)
		return (0);
	list_string = malloc((get_words(s, c) + 1) * sizeof(char *));
	if (!list_string)
		return (NULL);
	list_string = words(list_string, s, c);
	return (list_string);
}

/*
 * Chech s and the creation of memory for list_string. After that call
 * words. Advanced the pointer at each character keeping track of the start
 * of a word and the end of it. At eacch word call ft_substr() if the 
 * allocations does not succed call ft_free and free the memory.
int main(int argc, char **argv)
{
	char **words;
	argc = 0;
	words = ft_split(argv[1], argv[2][0]);
	while (*words != NULL)
	{
		printf("%s \n", (*words));
		words++;
	}
	printf("%s \n", (*words));
	return (0);
}*/
