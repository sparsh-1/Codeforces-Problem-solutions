for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    if sum(arr) % 2 != 0:
        print("YES")
    else:
        odd = 0
        even = 0
        for i in range(n):
            if odd >= 1 and even >= 1:
                break
            if arr[i] % 2 == 0:
                even += 1
            else:
                odd += 1
        if odd >= 1 and even >= 1:
            print("YES")
        else:
            print("NO")
