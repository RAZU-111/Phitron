from abc import ABC,abstractmethod
class User(ABC):
    def __init__(self,name,phone,email,address) -> None:
        self.name=name
        self.phone = phone
        self.email=email
        self.address=address

        

class Customer (User):
    def __init__(self, name,phone,email,address,money,order) -> None:
        self.wallet = money
        self.bill_due=0
        self._order = None
        super().__init__(name,phone,email,address)
    
    @property
    def order (self):
        return self._order
    
    @order.setter
    def order (self,order):
        self._order=order
    

    def place_order(self,order):

        self.order=order
        self.bill_due +=order.bill
        print(f'{self.name} placed an order with bill : {self.bill}')
    
    def eat_food(self):
        print(f'{self.name} items food {self.items}')

    def pay_for_order(self,amount):
        pass

    def give_tips(self,tips_amount):
        pass

    def write_review(self,stars):
        pass



class Employee(User):
    def __init__(self, name, phone, email, address,
    department,starting_date,ending_date,salary) -> None:
       

        self.department = department
        self.salary=salary
        self.due = salary
        self.strating_date=starting_date
        self.ending_date=ending_date
        super().__init__(name, phone, email, address)

    def receive_salary(self):
        self.due=0

class Chef(Employee):

    def __init__(self, name, phone, email, address,
    department, starting_date, ending_date, salary,cooking_items) -> None:
        self.cooking_items=cooking_items
        super().__init__(name, phone, email, address, department, starting_date, ending_date, salary)

     

class Server(Employee):
    def __init__(self, name, phone, email, address, 
    department, starting_date, ending_date, salary) -> None:
        super().__init__(name, phone, email, address, department, starting_date, ending_date, salary)

    
    def take_order(self,order):
        pass
    def transfer_order(self,order):
        pass
    def serve_food(self,order):
        pass
    def receive_tips(self,amount):
        self.tips_earning += amount


class Manager(Employee):
    def __init__(self, name, phone, email, address,
    department, starting_date,ending_date, salary) -> None:
        super().__init__(name, phone, email, address, department, starting_date,ending_date,salary)


