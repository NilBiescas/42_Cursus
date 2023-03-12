/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:43:49 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/06 11:02:13 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *c, int fd)
{
	size_t	index;

	index = 0;
	if (c)
	{
		ft_putstr_fd(c, fd);
		ft_putchar_fd('\n', fd);
	}
}

/*
int main(int argc, char **argv)
{
	ft_putstr_fd(argv[1], 1);
	return (0);
}*/
