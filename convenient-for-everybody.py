n = int(input())
a = list(map(int, input().split()))
a = [0] + a  


a += a[1:n+1]  

s, f = map(int, input().split())
length = f - s


current_sum = sum(a[1:1 + length])
max_sum = current_sum
t = float('inf')


for i in range(2, n + 1):
    current_sum = current_sum - a[i - 1] + a[i + length - 1]
    
    time = (s - i + n) % n + 1

    if current_sum == max_sum:
        t = min(t, time)
    elif current_sum > max_sum:
        max_sum = current_sum
        t = time


if t == float('inf'):
    t = 1

print(t)
