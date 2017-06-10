import sys
def main():
    arra = []
    for elem in range(10):
        arra.append(float(input('SAYSMTH: ')))
    print(min(arra), max(arra))
if __name__ == '__main__':
    main()
