import sys
fstp = input('Write First: ')
sctp = input('Write Second: ')

def main(fstp, sctp):
    txtfile = open('textprogpy.txt','w')
    txtfile.write(fstp)
    txtfile.write('\n')
    txtfile.write(sctp)
    txtfile.close()

if __name__ == '__main__':
    main(fstp, sctp)
