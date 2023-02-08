/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:45:00 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/03 17:30:49 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	char			*src;
	unsigned char	letter;

	src = b;
	letter = c;
	index = 0;
	while (src[index] != '\0' && len)
	{
		src[index] = letter;
		index++;
		len--;
	}
	return (b);
}
