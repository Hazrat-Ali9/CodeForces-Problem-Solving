n = int(input())
p = list(map(int, input().split()))

for i in range(n):
    h = [0] * n
    j = i
    while h[j] < 2:
        h[j] += 1
        j = p[j] - 1
    print(j + 1, end=' ')
print()

