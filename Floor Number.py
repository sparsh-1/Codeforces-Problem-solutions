for _ in range(int(input())):
    n, x = map(int, input().split())
    if n <= 2:
        print(1)
    else:
        n -= 2
        print(((n // x) + 1) if ((n % x) == 0) else ((n // x) + 2))

# Setter's Solution
# for i in range(int(input())):
#     n, x = map(int, input().split())
#     print(1 if n <= 2 else (n - 3) // x + 2)
