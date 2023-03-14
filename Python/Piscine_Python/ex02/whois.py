# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    whois.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 09:46:51 by nbiescas          #+#    #+#              #
#    Updated: 2023/03/14 10:22:33 by nbiescas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
import sys

argv = sys.argv[1:]

if (len(argv) != 0):
    try:
        if (len(argv) > 1):
            raise AssertionError("more than one argument is provided")
        if (not argv[0].isnumeric()):
            raise AssertionError("argument is not an integer")
        number = int(argv[0])
        if (number == 0):
            print("I'm Zero")
        elif (number % 2 == 0):
            print("I'm Even")
        else:
            print("I'm Odd")
    except AssertionError as err:
        print(f"AssertionError: {err}")

