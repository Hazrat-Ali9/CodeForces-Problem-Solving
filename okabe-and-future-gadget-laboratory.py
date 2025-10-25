n = int(input())
L = [list(map(int, input().split())) for _ in range(n)]

for i in range(n):
    for j in range(n):
        if L[i][j] != 1:
            temp = False
            for k in range(n):
                for l in range(n):
                    if k != j and l != i and L[i][k] + L[l][j] == L[i][j]:
                        temp = True
                        break
                if temp:
                    break
            if not temp:
                print("No")
                exit()

print("Yes")
