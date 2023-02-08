/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:22:05 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/08 15:33:12 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len_s;
	char	*ptr;
	size_t	index;

	index = 0;
	len_s = strlen(s);
	ptr = malloc(sizeof(char) * (len_s + 1));
	if (!ptr)
		return (NULL);
	while (s[index] != '\0')
	{
		ptr[index] = *(*f)(index, &s[index]);
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
