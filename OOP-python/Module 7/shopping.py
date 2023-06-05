class Shopping :
    cart=[]
    origin ="china"
    def __init__(self,name ,location) -> None:
        self.name=name
        self.location=location
    
    def purchase(self,item,price,amount):
        remanning = amount - price
        print(f'Buing {item} price {price} remaning {remanning}')
    @classmethod
    def hudai_dakhi(self):
        print('kinbo na kicu Ac er batas khabo shudu')
    
    @staticmethod
    def multiply(a,b):

        result = a/b;
        print(result)

# shopping.purchase('a',2,2,3)
basundhara = Shopping('basundthara','pantho path')
basundhara.purchase('shoe',4000,5000)

basundhara.multiply(100,20)
