for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    if n <= 2:
        print(0)
        continue
    else:
        i = 0
        while arr[i] != 1:
            del arr[i]
        i = 0
        while i < len(arr):
            if arr[i] == 0:
                i += 1
                continue
            else:
                while i + 1 < len(arr) and arr[i + 1] == 1:
                    del arr[i]
                i += 1
        if arr[len(arr) - 1] == 0:
            i = len(arr) - 1
            while arr[i] == 0:
                del arr[i]
                i -= 1
    print(arr.count(0))
