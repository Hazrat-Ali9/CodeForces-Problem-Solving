t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    mn = min(a)
    ans = 0
    for i in range(n):
        ans += a[i] - mn
    print(ans)

