def total_sum(x, y):
    first = x * (x + 1) // 2
    last = first + y * (x + 1)
    return (first + last) * (y + 1) // 2
 
def main():
    m, b = map(int, input().split())
    ans = 0
    for y in range(b + 1):
        x = (b - y) * m
        ans = max(ans, total_sum(x, y))
    print(ans)
 
main()
