n = int(input())
a = list(map(int, input().split()))

a.sort()
ans = 0

for i in range(n // 2):
    pair_sum = a[i] + a[n - 1 - i]
    ans += pair_sum * pair_sum

print(ans)
