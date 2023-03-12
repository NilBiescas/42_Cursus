/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:45:00 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/07 11:13:55 by nbiescas         ###   ########.fr       */
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
	while (index < len)
	{
		src[index] = letter;
		index++;
	}
	return (b);
}
