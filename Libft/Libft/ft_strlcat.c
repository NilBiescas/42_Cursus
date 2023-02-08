/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:28:40 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/06 18:06:34 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;
	int		left_size;

	size_dst = strlen(dst);
	size_src = strlen(src);
	if (dstsize <= size_dst)
		return (dstsize + size_src);
	while (*src && size_dst < (dstsize - 1))
	{
		*(dst + size_dst) = *src;
		src++;
		size_dst++;
		size_src--;
	}
	*(dst + size_dst) = '\0';
	return (size_dst + size_src);
}
