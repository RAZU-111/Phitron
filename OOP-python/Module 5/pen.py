class Pen :
    masefacture = 'China'

    def __init__(self,brand,color,type):
        self.brand=brand
        self.color=color
        self.type=type

my_pen = Pen('Matadoore','Black','ballpen')

her_pen=Pen('Olymipc','red','gel')
print(my_pen.brand,my_pen.color,my_pen.type)
print(her_pen.brand,her_pen.color,her_pen.type)
