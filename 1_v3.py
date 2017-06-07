import sys
from collections import Counter
st = input('Write smth with w: ')
def main(st):
    x = Counter()
    for s in st:
        x[s] += 1
    print('W count is:', x[s])


if __name__ == '__main__':
    main(st)
