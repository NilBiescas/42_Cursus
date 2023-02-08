/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:43:49 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/08 17:45:49 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *c, int fd)
{
	size_t	index;

	index = 0;
	while (c[index] != '\0')
		write(fd, &c[index++], 1);
	write(fd, "\n", 1);
}

int main(int argc, char **argv)
{
	ft_putstr_fd(argv[1], 1);
	return (0);
}
