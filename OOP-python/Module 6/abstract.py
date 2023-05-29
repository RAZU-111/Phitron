from abc import ABC ,abstractclassmethod

class Animal(ABC):
    @abstractclassmethod
    def eat(self):
        print('I am eating ')
        
    def move(self):
        print('')
        pass
class Monkey(Animal):
    
    def __init__(self,name) -> None:
        self.name=name
        super().__init__()
    def eat(self):
        print("bannana khabo ")

banor = Monkey('banor ')

banor.eat()