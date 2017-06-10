class kek:
    def __init__(self, pid, phone_n):
        self.pid = pid
        self.phone_n = phone_n

def main():
    a1 = []
    a1.append(kek(input('PID: '), input('PHONENUMBER: ')))
    a1.append(kek(input('PID: '), input('PHONENUMBER: ')))
    a1.append(kek(input('PID: '), input('PHONENUMBER: ')))
    print(a1[1].pid)
if __name__ == '__main__':
    main()
