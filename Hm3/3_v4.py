from pgup import pgu
import sys
op = pgu(input('First Name: '),input('Last Name: '), input('Tel: '), input('ID: '))

def main():
    print(op.uid)
    file_name = open('base.txt', 'a')
    file_name.write(op.fn+'\t')
    file_name.write(op.ln+'\t')
    file_name.write(op.tel+'\t')
    file_name.write(op.uid+'\t'+'\n')
if __name__ == '__main__':
    main()
