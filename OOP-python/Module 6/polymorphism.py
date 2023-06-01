from math import pi
class Shape:
    def __init__(self,name) -> None:
        self.name=name

class Rectriangle(Shape):
    def __init__(self, name,lenth,wigth) -> None:
        self.lenth=lenth
        self.wigth=wigth
        super().__init__(name)
    
    def area(self):
      return self.lenth*self.wigth


class Circle(Shape):
    def __init__(self, name,redius) -> None:
        self.redius =redius
        super().__init__(name)
    def area(self):
        return pi*self.redius*self.redius
    


choturvuj = Rectriangle('rec',10,20)

print(choturvuj.area())

bitto = Circle('circle',3)
print(bitto.area())



 