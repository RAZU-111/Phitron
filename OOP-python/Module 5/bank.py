class Bank: 
    def __init__(self,balance):
        self.balance = balance
        self.min_withdraw = 500
        self.max_withdraw=50000
    def get_balance(self):
        return self.balance
        
    def deposit(self,amount):
        if amount > 0 :
            self.balance += amount
            print(f'Add {amount} TK ')
            print('New balance :',self.get_balance())
    
    def withdraw(self,amount):
        if amount < self.min_withdraw:
            print( f'you cannot withdraw less than {self.min_withdraw}')
        elif amount > self.max_withdraw :
            print( f'Bank will be Empty ,you cannot  withdraw more than {self.max_withdraw} Tk ')
        else :
            self.balance -= amount
            print(f'Here is your money {amount}')


Ab = Bank(10000)
Ab.withdraw(5000)
Ab.deposit(2000)
Ab.withdraw(400)
Ab.withdraw(1500)
