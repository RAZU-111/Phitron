t = int(input())
a = list(map(int, input().split()))
res = 0

for i in range(t):
    cnt = 0

    if a[i] % 2 != 0:
        print(0)
        exit()

    while a[i] % 2 == 0:
        cnt += 1
        a[i] //= 2

    if i == 0 or cnt < res:
        res = cnt

print(res)
