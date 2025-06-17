t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    
    
    res_a = max(0, max(b, c) - a + 1)
    res_b = max(0, max(a, c) - b + 1)
    res_c = max(0, max(a, b) - c + 1)
    
    print(res_a, res_b, res_c)

