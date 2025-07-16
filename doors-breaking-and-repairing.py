import math

n, x, y = map(int, input().split())
a = list(map(int, input().split()))

temp = sum(1 for num in a if num <= x)

if x > y:
    print(n)
else:
    print(math.ceil(temp / 2))

