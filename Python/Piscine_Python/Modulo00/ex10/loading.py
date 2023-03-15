# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    loading.py                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 09:21:23 by nbiescas          #+#    #+#              #
#    Updated: 2023/03/15 11:47:39 by nbiescas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
import time

def ft_progress(listy):
    start = time.time()
    len_listy = len(listy)
    n        = 20
    init_bar = ">"
    size_bar = len_listy/20
    for i in listy:
        if ((((i + 1) % size_bar) == 0)):
            init_bar = "=" + init_bar
            n = n - 1
        bar = init_bar + (" " * n)
        mins, secs = divmod(len_listy - i - 1, 60)
        percentatge = round((i / len_listy) * 100,2)
        elapsed_time = round((time.time() - start),2)
        print(f"ETA: {mins}.{secs}s [{percentatge + 1}%] [{bar}] {i + 1}/{len_listy} | elapsed time {elapsed_time}", end="\r")
        yield i

for i in ft_progress(range(100)):
    time.sleep(0.01)
    continue
