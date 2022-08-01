for _ in range(int(input())):
    a, b, c, d, k = map(int, input().split())
    ans = 0
    if a % c == 0:
        ans += a // c
    else:
        ans += a // c + 1
    if b % d == 0:
        ans += b // d
    else:
        ans += b // d + 1
    if ans > k:
        print(-1)
    else:
        if a % c == 0:
            print(a // c, end=' ')
        else:
            print(a // c + 1, end=' ')
        if b % d == 0:
            print(b // d)
        else:
            print(b // d + 1)