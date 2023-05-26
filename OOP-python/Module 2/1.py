t = int(input())

for i in range(1, t+1):
    n = int(input())
    
    if n == 0:
        print(0, end='')
    
    while n != 0:
        print(n % 10, end=' ')
        n = n // 10
    
    print()

