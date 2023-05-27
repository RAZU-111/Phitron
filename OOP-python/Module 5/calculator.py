class Calculator :
    brand = 'casio fx981'
    color ='black'
    def add (self,x,y):
        return x+y
    def sub (self,x,y):
        return x-y
    def mul (self,x,y):
        return x*y
    def div (self,x,y):
        return x/y
    
my_cal = Calculator()


print( my_cal.add(10,20))
print( my_cal.sub(10,20))
print( my_cal.mul(10,20))
print( my_cal.div(10,20))




