class Shopping :
    def __init__(self,name):
        self.name=name
        self.cart=[]
    
    def add_to_cart(self,item,price,quantity):
        product = {'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)


    def checkout(self,amount):
        total =0
        for item in self.cart :
           
            total +=item['price']*item['quantity']
        print('total amount :',total)

        if amount < total:
            print(f'Give more : {abs(total-amount)}')
            
        else:
            print(f'Take {abs(total-amount)}') 
            print("Thank You ...sir/mam")  


    # def remove_item(self,item):
           

      





shopon = Shopping('alen shopon')
shopon.add_to_cart('alu',34,2)
shopon.add_to_cart('dal',130,3)
shopon.add_to_cart('rice',80,5)
shopon.checkout(5000)
shopon.remove_item('alu')
