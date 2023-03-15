import sys

string = " ".join((sys.argv[1:]))

str_reverse = string[::-1] 
new_string = ""
for char in str_reverse:
    new_string += (char.upper() if char.islower() else char.lower())
print(new_string)
