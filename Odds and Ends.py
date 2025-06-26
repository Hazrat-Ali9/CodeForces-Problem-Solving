n = int(input())
s = list(map(int, input().split()))

c1 = s[0] % 2 == 1       
c2 = s[-1] % 2 == 1      
c3 = n % 2 == 1          

if c1 and c2 and c3:
    print("Yes")
else:
    print("No")

