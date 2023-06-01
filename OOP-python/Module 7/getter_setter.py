class User:
    def __init__(self,name,age,money) -> None:
        self._name=name
        self._age=age
        self.__money=money
    @property
    def age(self):
        return self._age
    @property
    def salary (self):
        return self.__money
    @salary.setter
    def salary(self,valu):
        if valu > 0 :
            self.__money +=valu
       
    

samsu= User('kopa',21,10000)
print(samsu.age)
samsu.salary = 10000
print(samsu.salary)