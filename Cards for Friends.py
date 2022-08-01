for _ in range(int(input())):
    w, h, n = map(int, input().split())
    count = 1
    count1 = 1
    count2 = 1
    if w % 2 == 0:
        while w % 2 == 0:
            w = w // 2
            count *= 2
        count1 = count
    if h % 2 == 0:
        while h % 2 == 0:
            h = h // 2
            count *= 2
        count2 = count
    if count1 >= n or count2 >= n:
        print("YES")
    else:
        print("NO")
