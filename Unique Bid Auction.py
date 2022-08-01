for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    dic = {}
    for i in range(n):
        dic[arr[i]] = 1 + dic.setdefault(arr[i], 0)
    ne = list(sorted(dic))
    i = 0
    flag = False
    while i < len(ne):
        if dic[ne[i]] == 1:
            print(arr.index(ne[i]) + 1)
            flag = True
            break
        else:
            i += 1
    if not flag:
        print(-1)
