class Product:
    
    def __init__(self,name,price,quantity) -> None:
        self.product_name=name
        self.product_price=price
        self.product_quantity=quantity
        


class Store :
    def __init__(self) -> None:
        self.product_price = {}
        self.product_quantity={}
    def add_product(self,name,price,quantity):

        product = Product(name,price,quantity)

        self.product_price[product.product_name]=product.product_price
        self.product_quantity[product.product_name]=product.product_quantity

class Shop(Store):
    def __init__(self,name) -> None:
        self.shope_name=name
        super().__init__()
    
sp = Shop("Apple Gaget")
sp.add_product('iphone 14 pro',800,10)
sp.add_product('iphoe 13 pro ',700,5)
print(sp.product_quantity)
print(sp.product_price)