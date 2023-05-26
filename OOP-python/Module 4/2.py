from collections import Counter

T = int(input())
num = list(map(int, input().split()))

m = Counter(num)

ans = 0
for x, n in m.items():
    if n < x:
        ans += n
    else:
        ans += n - x

print(ans)
