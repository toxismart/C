import sys

def main():
    new_f = open('TextFileV2.txt', 'w')
    new_f.write(input('Enter String Here: ')+'\n')
    new_f.write(input('Enter Int Here: '))
    new_f.close()
if __name__ == '__main__':
    main()
