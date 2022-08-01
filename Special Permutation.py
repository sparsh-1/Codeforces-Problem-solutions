for _ in range(int(input())):
    n = int(input())
    if n == 2:
        print(2, 1)
    else:
        for i in range(2, n + 1, 2):
            print(i, end=' ')
        if n % 2 != 0:
            print(n, end=' ')
        for i in range(1, n, 2):
            print(i, end=' ')
        print()
