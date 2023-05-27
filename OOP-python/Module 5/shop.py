class shop:
    shopping_mall = 'Boshundahara'

    def __init__(self,byer):
        self.byer=byer
        self.cart=[]
    def add_to_cart(self,item):
        self.cart.append(item)    


robin = shop('rob in ') 
robin.add_to_cart('shirt')   
robin.add_to_cart('pant')   
robin.add_to_cart('shoe')

print(robin.cart)


munna = shop('Luccha munna ')
munna.add_to_cart('royal')
munna.add_to_cart('laddu')
munna.add_to_cart('pani')

print(munna.cart)