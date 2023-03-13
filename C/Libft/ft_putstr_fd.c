/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:33:10 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/06 10:58:34 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	size_t	index;

	index = 0;
	if (c)
		while (c[index] != '\0')
			write(fd, &c[index++], 1);
}
