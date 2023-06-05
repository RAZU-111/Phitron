import math
class Calculator:
    def __init__(self,a,b,c) -> None:
        self.a=a
        self.b=b
        self.c=c
    def sum(self):
        result = self.a+self.b+self.c
        return  result
    def factorial(self):
        
        result = math.factorial(self.b)
        print(f'factorial of  {self.b} is :{result}')

calculator = Calculator(2,5,6)
print('sumation = ',calculator.sum())
calculator.factorial()


class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight


class Cricketer(Person):
    def __init__(self, name, age, height, weight) -> None:
        super().__init__(name, age, height, weight)

    def __lt__(self,others):
         return self.age < others.age
           


Sakib = Cricketer('Sakib', 38, 68, 91)
Mushfiq = Cricketer('Mushfiq', 36, 55, 82)
Mustafiz = Cricketer('Mustafiz', 27, 69, 86)
Riyad = Cricketer('Riyad', 39, 72, 92)
youngest_player=min([Sakib,Mushfiq,Mustafiz,Riyad])
print('Youngest player ->',youngest_player.name)




T1 ,T2= map(int, input().split())
 
arr = list(map(int, input().split()))

counter = [0]* (T2+1)

for i in arr:
    counter[i] += 1

for x in range(1, T2 + 1):
    print(counter[x])
