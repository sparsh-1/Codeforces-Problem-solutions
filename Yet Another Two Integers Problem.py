for _ in range(int(input())):
    a, b = map(int, input().split())
    if a == b:
        print(0)
    elif a > b:
        print(((a - b) // 10) if ((a - b) % 10 == 0) else (((a - b) // 10) + 1))
    else:
        print(((b - a) // 10) if ((b - a) % 10 == 0) else (((b - a) // 10) + 1))
