import sys

def main():
    alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    thefile = open('symbols.txt', 'w')
    for bukva in alphabet:
        thefile.write('%s \t' % bukva)

if __name__ == '__main__':
    main()
