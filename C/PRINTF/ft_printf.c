/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:06:14 by nbiescas          #+#    #+#             */
/*   Updated: 2023/03/12 20:07:07 by nbiescas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int formats(char conv, va_list args)
{
    if (conv == 'c')
    {
        char prova = va_arg(args, int);
        return (write(1, &prova, 1));
    }
    if (conv == 's')
        return (ft_putstr(va_arg(args, char*)));

    if (conv == 'd' || conv == 'i')
        return (ft_putstr(ft_itoa(va_arg(args, int))));

    if (conv == 'u')
        return (ft_putstr(ft_itoa(va_arg(args, unsigned int))));

    if (conv == 'x')
        return (hexadecimal_conversion(va_arg(args, unsigned int), 0));

    if (conv == 'X')
        return (hexadecimal_conversion(va_arg(args, unsigned int), 1));
        
    if (conv == '%')
        return (write(1, &"%", 1));
    return (0);
}

int ft_utils(char const *sentence, va_list args)
{
    size_t i;
    int sum;
    int size;

    size = 0;
    sum = 0;
    i = 0;
    while(sentence[i] != '\0')
    {
        if (sentence[i] == '%' && sentence[i + 1] != '\0')
        { 
            size = formats(sentence[i + 1], args);
            i = i + 1;
        }
        else
            size = write(1, &sentence[i], 1);
        if (size == -1)
            return (-1);
        sum += size;
        i++;
    }
    return (sum);
}

int ft_printf(char const *sentence, ...)
{
    int size;
    va_list args;
    
    va_start(args, sentence);
    size = ft_utils(sentence, args);
    va_end(args);
    return (size);
}
/* 
int main(int argc, char **argv)
{
    int se = ft_printf(argv[1], ft_atoi(argv[2]));
    //int ls = printf(argv[1], ft_atoi(argv[2]));

    return (0);
}*/