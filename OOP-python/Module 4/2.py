from collections import Counter

Test = int(input())
num = list(map(int, input().split()))

m = Counter(num)

cnt = 0
for x, n in m.items():
    if n < x:
        cnt += n
    else:
        cnt += n - x
        
print(cnt)
