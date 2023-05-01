/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:02:12 by nbiescas          #+#    #+#             */
/*   Updated: 2023/05/01 15:51:59 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *argument)
{
    size_t i;

    i = 0;
    while(argument[i] != '\0')
        if (write(1, &argument[i++], 1) == -1)
            return (-1);
    return (i);
}
