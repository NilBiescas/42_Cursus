/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:46:41 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/08 09:15:10 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;
	char	numb;

	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = l * -1;
	}		
	if (l > 9)
	{
		ft_putnbr_fd(l / 10, fd);
		l = l % 10;
	}
	if (l < 10)
	{
		numb = l + '0';
		write(fd, &numb, 1);
	}
}
