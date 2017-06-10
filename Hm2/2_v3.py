import os
import sys

def main():
    fd = open('TextFileV2.txt', 'r')
    spaces = 0
    for spaces,line in enumerate(fd):
        spaces += line.count(' ')
        print('Spaces %d' % (spaces))
    fd.close()
if __name__ == '__main__':
    main()
