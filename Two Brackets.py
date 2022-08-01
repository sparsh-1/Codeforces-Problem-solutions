for _ in range(int(input())):
    arr = list(map(str, input()))
    rlb = 0
    slb = 0
    ans = 0
    for i in range(len(arr)):
        if arr[i] == '(':
            rlb += 1
            continue
        if arr[i]== '[':
            slb += 1
            continue
        if arr[i] == ')' and rlb > 0:
            rlb -= 1
            ans += 1
            continue
        if arr[i] == ']' and slb > 0:
            slb -= 1
            ans += 1
            continue
    print(ans)
