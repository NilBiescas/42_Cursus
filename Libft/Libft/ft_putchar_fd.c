/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:00:45 by nbiescas          #+#    #+#             */
/*   Updated: 2023/02/08 17:35:57 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(int argc, char **argv)
{
	ft_putchar_fd(argv[1][0], 33);
	return(0);
}
