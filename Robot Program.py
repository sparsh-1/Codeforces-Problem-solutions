for _ in range(int(input())):
    x, y = map(int, input().split())
    if x == y:
        print(abs(x) + abs(y))
    elif y == 0:
        print(2 * abs(x) - 1)
    elif x == 0:
        print(2 * abs(y) - 1)
    elif x == (y - 1) or y == (x - 1):
        print(abs(x) + abs(y))
    elif x > y:
        print(2 * abs(y) + 2 * (x - y) - 1)
    else:
        print(2 * abs(x) + 2 * (y - x) - 1)