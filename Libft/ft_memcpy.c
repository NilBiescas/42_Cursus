/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:45:13 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/21 10:24:26 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		index;
	char		*desti;
	const char	*source;

	if (!dst && !src)
		return (NULL);
	index = 0;
	desti = dst;
	source = src;
	while (index < n)
	{
		desti[index] = source[index];
		index++;
	}
	return (dst);
}
