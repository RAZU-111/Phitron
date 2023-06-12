class Restaurant:
    def __init__(self,name,rent,menu=[]) -> None:
        self.name=name
        self.orders=[]
        self.chef=None
        self.server=None
        self.manager=None
        self.menu=menu
        self.rent=rent
        self.revanue=0
        self.balace =0 
        self.expense=0
        self.profit=0

    def add_employee(self,empolyee_type,empolyee) :

        if empolyee_type == 'chef':
            self.chef = empolyee
        elif empolyee_type == 'server':
            self.server = empolyee
        elif empolyee_type == 'manager':
            self.manager = empolyee

    def add_order(self,order):
        self.orders.append(order)
        
    def receive_pyment(self,order,amount,customer):
        if  amount >= order.bill:
            self.revanue += order.bill
            self.balace += order.bill
            customer.due_amount = 0  
            return amount - order.bill     
    
    def expense(self,amount,description):
        if amount < self.balace:
            self.expense += amount
            self.balace -= amount
            print(f'Expence {amount} for {description}')
        else:
            print('Not enough money for pay {amount}')

    def pay_salary(self,empolyee):
        if empolyee.salary < self.balace:
            empolyee.receive_salary()
        
    def show_empolyee(self):
        print('-----SHOW EMPOLYEE-----')
        if self.chef is not None:
            print(f'Chef: {self.chef.name} with salary: {self.chef.salary}')
        if self.server is not None:
            print(f'server: {self.server.name} with salary: {self.server.salary}')