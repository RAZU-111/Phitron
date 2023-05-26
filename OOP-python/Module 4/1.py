arr = [['' for _ in range(1000)] for _ in range(1000)]
value = input() 
row = 0
col = 0
r = 0
l = 0
count = 0

for i in range(len(value)):
    if value[i] == 'R':
        arr[row][col] = value[i]
        r += 1
    else:
        arr[row][col] = value[i]
        l += 1
    col += 1

    if r == l and r > 0:
        row += 1
        col = 0
        count += 1
        r = 0
        l = 0

print(count)
for i in range(1000):
    if arr[i][0] != 'R' and arr[i][0] != 'L':
        continue
    print("".join(arr[i]))
