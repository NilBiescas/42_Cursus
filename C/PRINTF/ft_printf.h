/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:47:40 by nbiescas          #+#    #+#             */
/*   Updated: 2023/05/02 12:57:16 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <unistd.h>

int		ft_printf(char const *sentence, ...);
int		formats(char conv, va_list args);
int		print_char(int c);
int		ft_putstr(char *argument);
int		print_address(void *adress);
int		hexadecimal_conversion(unsigned long num, char upper);

#endif
