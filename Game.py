n = int(input())
arr = list(sorted(list(map(int, input().split()))))
if n % 2 != 0:
    print(arr[n // 2])
else:
    print(arr[n // 2 - 1])
