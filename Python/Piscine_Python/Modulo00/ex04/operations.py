# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    operations.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 11:32:16 by nbiescas          #+#    #+#              #
#    Updated: 2023/03/14 12:31:56 by nbiescas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
import sys
numbers = sys.argv[1:]

if (len(numbers) != 0):

    try:
        if (len(numbers) != 2):
            raise AssertionError("too many arguments")
        if not all(True if c.isdigit() else False for c in numbers):
            raise AssertionError("only integers")
        A = int(numbers[0])
        B = int(numbers[1])
        Sum          = A + B
        Difference   = A - B
        Product      = A * B
        if not (B):
            Quotient = "ERROR (division by zero)"
            Modulo   = "ERROR (modulo by zero)"
        else:
            Quotient = A / B
            Modulo   = A % B
        print("Sum:           {:>6}".format(Sum))
        print("Difference:    {:>6}".format(Difference))
        print("Product:       {:>6}".format(Product))
        print("Quotient:      {:>6}".format(Quotient))
        print("Remainder:     {:>6}".format(Modulo))
    except AssertionError as err:
        print(f"AssertionError: {err}")

else:
    print("Usage: python operations.py <number1> <number2>\
\nExample:\n    python operations.py 10 3")
