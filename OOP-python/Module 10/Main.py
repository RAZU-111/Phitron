from Menu import Pizza,Burger,Drinks,Menu
from Restaurant import Restaurant
from User import Chef,Customer,Server,Manager
from order import Order

def main():
    menu =Menu()
    pizza_1= Pizza('naga',1350,'12','besi kore jhal')
    menu.add_menu_item('pizza',pizza_1)
    pizza_2= Pizza('Alu',1550,'12','besi kore alu')
    menu.add_menu_item('pizza',pizza_2)
    pizza_3= Pizza('dal',1050,'12','besi kore dal')
    menu.add_menu_item('pizza',pizza_3)

    burger_1= Burger('naga',350,'beaf','bun and salad')
    menu.add_menu_item('burger',burger_1)
    burger_2= Burger('cheass',450,'beaf','bun and salad')
    menu.add_menu_item('burger',burger_2)
    burger_3= Burger('chicken',550,'chicken','bun and salad')
    menu.add_menu_item('burger',burger_3)


    drink_1=Drinks('cocacoal',60,True)
    menu.add_menu_item('drinks',drink_1)
    drink_2=Drinks('lattay coffee',150,False)
    menu.add_menu_item('coffee',drink_2)


    

    restaurant = Restaurant('samsu cafe',2000,menu)
    # add employee
    manager = Manager('kalu manager','0174..','kau@sfyu.bd','kalmpur','core','jan 01 2020','feb 02 2023',1500)
    restaurant.add_employee('manager', manager)
     
    restaurant.add_employee('manager',manager)
    
    chef = Chef('rustom','01502556231','rus@ugfy.com','CTG','chef','may 04 2020','feb 01 2023',500,'sob ')
    restaurant.add_employee('chef',chef)

    server = Server('xyz','017155258','zy@gufg.com','noyakhali',
    'server','jan 01 2020','june 01 2023',400)
    restaurant.add_employee('server',server)


    customer_1=Customer('unknown','454','un@kk','gulsan',1000000)
    order_1= Order(customer_1,[pizza_1])

    menu.show_menu()
    restaurant.show_empolyee()
if __name__ == '__main__':

    main()

 