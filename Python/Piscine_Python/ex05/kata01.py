# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    kata01.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 12:41:08 by nbiescas          #+#    #+#              #
#    Updated: 2023/03/14 12:51:47 by nbiescas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
kata = {
        'Python': 'Guido vab Rossum',
        'Ruby': 'Yukihiro Matasumoto',
        'PHP': 'Rasmus Lerdorf'
        }

for key, value in kata.items():
    print("{} was created by {}".format(key, value))
