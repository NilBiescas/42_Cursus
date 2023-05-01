#include "ft_printf.h"

int count_digits_hex(unsigned int num)
{
    int len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 16;
    }
    return (len);
}

char    *decimal_to_hexadecimal(unsigned int num, int digits)
{
    int     num_digits;
    char    *result;

    num_digits = 0;
    result = (char *)malloc(sizeof(char) * (digits + 1));
    if (!result)
		return (NULL);
    while (num != 0)
    {
        if ((num % 16) < 10)
            result[num_digits] = (num % 16) + 48;
        else
            result[num_digits] = (num % 16) + 87;
        num = num / 16;
        num_digits++;
    }
    result[num_digits] = '\0';
    return (result);
}

int hexadecimal_conversion(unsigned int num, int upper)
{
    char    *hexadecimal_str;
    int     len;
    char    letter;
    int     i;

    i = 0;
    len = count_digits_hex(num);
    hexadecimal_str = decimal_to_hexadecimal(num, len);
    if (hexadecimal_str == NULL)
        return (-1);
    while (len > 0)
    {
        letter = hexadecimal_str[len - 1];
        if (upper)
            letter = ft_toupper(letter);
        if (write(1, &letter, 1) == -1)
            return (-1);
        i++;
        len--;
    }
    return (i);
}