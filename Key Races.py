s, v1, v2, t1, t2 = map(int, input().split())
if v1 * s + 2 * t1 == v2 * s + 2 * t2:
    print('Friendship')
elif v1 * s + 2 * t1 < v2 * s + 2 * t2:
    print('First')
else:
    print('Second')

# Setter's Code
# s, v1, v2, t1, t2 = map(int, input().split())
# q1 = 2 * t1 + s * v1
# q2 = 2 * t2 + s * v2
# if q1 < q2:
#     print('First')
# elif q1 > q2:
#     print('Second')
# else:
#     print('Friendship')
#