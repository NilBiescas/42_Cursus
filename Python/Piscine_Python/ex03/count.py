# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 10:23:00 by nbiescas          #+#    #+#              #
#    Updated: 2023/03/14 11:30:40 by nbiescas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
import sys
def text_analyzer(string = None):
    """
    These function takes as an argument a string. If nothing passed string is equal to None.
    If string == None, an input is needed by the user. If the type of the input is str a ValueError
    is raised. If is a proper string then we count upper lower, spaces and punctuations sings.
    """
    print(type(string))
    if (string == None):
        string = input("Enter a string:\n")
    if type(string) != str:
        raise AssertionError("The input is not a proper string")
    spaces = string.count(" ")
    lower = 0
    upper = 0
    punctuacion = 0
    for c in string:
        if c.islower():
            lower += 1
        elif c.isupper():
            upper += 1
        elif (not c.isalnum() and c != " "):
            punctuacion += 1
    print("The text contains {} character(s):\n- {} upper letter(s)\n- {} lower letter(s)\
\n- {} punctuaction mark\n- {} space(s)".format(len(string), upper, lower, punctuacion, spaces))
    return

if __name__=="__main__":
    if (len(sys.argv) > 2):
        raise AssertionError("To many arguments")
    else:
        if (len(sys.argv) == 1):
            text_analyzer()
        else:
            text_analyzer(sys.argv[1])
    

