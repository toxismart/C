import sys

f = open('textfile.txt', 'w')
for num in range(0, 22):
    if (num & 1) != 0:
        print(num)
        f.write(str(num))  
