import sys
def main():
    f = open('textprogc.txt')
    for line in f.readlines():
        print(line)
    f1 = open('newfile.txt', 'w')
    f1.write(line)
if __name__ == '__main__':
    main()
