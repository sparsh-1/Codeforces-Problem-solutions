n = int(input())
code = list(map(int, input()))
sec_code = list(map(int, input()))
sume = 0
for i in range(len(code)):
    sume += min(abs(code[i] - sec_code[i]), 10 - abs(code[i] - sec_code[i]))
print(sume)
