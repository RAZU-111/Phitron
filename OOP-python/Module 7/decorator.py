import math
import time
def timer(func):
    def inner(*args,**kawrgs):
        print('Time start ')
        start = time.time()
        func(*args,**kawrgs)
        print('Time end')
        end=time.time()
        print(f'total time is : {end-start}')
    return inner
@timer
def get_factorial(n):
    print('factorial strating ')
    result = math.factorial(n)
    print(f'factorial of  {n} is :{result}')

get_factorial(120)
# timer(get_factorial)()
