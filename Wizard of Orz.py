for _ in range(int(input())):
    n = int(input())
    if n == 1:
        print(9)
        continue
    elif n == 2:
        print(98)
        continue
    elif n == 3:
        print(989)
        continue
    else:
        print(989, end='')
        for i in range(n - 3):
            print((i % 10), end='')
        print()