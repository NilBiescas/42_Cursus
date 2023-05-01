/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:47:40 by nbiescas          #+#    #+#             */
/*   Updated: 2023/04/20 10:47:42 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

int     ft_putstr(char *argument);
char    *decimal_to_hexadecimal(unsigned int num, int digits);
int     count_digits_hex(unsigned int ls);
int     hexadecimal_conversion(unsigned int num, int upper);