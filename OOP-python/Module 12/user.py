import random

class User:
    def __init__(self,email,password) -> None:
        self.email=email
        self.password=password

class Account_Holder(User):
    def __init__(self, email, password,balance) -> None:
        self.balance = balance
        super().__init__(email, password)

    
    def deposit(self,amount):
        if amount > 0 :
            self.balance += amount
            print(f'Add {amount} TK ')
            self.transaction_history.append(f"Deposit: +{amount}")
            
    def withdraw(self,amount):
        if amount < 500 :
            print( f'you cannot withdraw less than 500 Tk')
        elif amount > 10000000:
            print('Bank is bankrupt')
        else:
            self.balance -= amount
            print(f'Here is your money {amount}')
    
            self.transaction_history.append(f"withdraw: -{amount}")

    def get_balance(self):
        return self.balance
    
    def transfer(self,reciever_ac,amount):
        if self.balance >= amount:
            self.balance -=amount
            reciever_ac.deposit(amount)
            self.transaction_history.append(f"transfer: -{amount}")
            return self.balance
        elif self.balance < amount:
            print('sorry,Balance is less than {amount}')
    
        def take_loan(self):
          if Admin.on_loan_fetuer:
            loan_amount = self.balance * 2
            self.balance += loan_amount
          
          else:
            return "sorry , You are not get the loan"

  
class Admin(User): 
    def __init__(self, email, password) -> None:
        super().__init__(email, password)

    def create_new_account(self,email,password):
        account = User(email,password)
        self.accounts.append(account)

    def create_new_account(self, account, bank):
        bank.create_new_account(account)
        
    def get_account(self,account_number):
        for account in self.accounts:
            if account_number  == account_number:
                return account
        
    
    def on_loan_fetuer(self):
        self.loan_feture = True
    
    def off_loan_fetuer(self):
         self.loan_feture = False
    
    def total_bank_balance(self, bank):
        return bank.total_bank_balance()

    def total_loan_given(self, bank):
        return bank.total_loan_given()  
 

class Account_Holder(User):
    def __init__(self, email, password,balance) -> None:
        self.balance = balance

        super().__init__(email, password)

    def deposit(self,amount):
        if amount > 0 :
            self.balance += amount
            print(f'Add {amount} TK ')
            self.transaction_history.append(f"Deposit: +{amount}")
            
    def withdraw(self,amount):
        if amount < self.min_withdraw :
            print( f'you cannot withdraw less than 500 Tk')
        elif amount > self.max_withdraw :
            print('Bank is bankrupt')
        else:
            self.balance -= amount
            print(f'Here is your money {amount}')
    
            self.transaction_history.append(f"withdraw: -{amount}")

    def get_balance(self):
        return self.balance
    
    def transfer(self,reciever_ac,amount):
        if self.balance >= amount:
            self.balance -=amount
            reciever_ac.deposit(amount)
            self.transaction_history.append(f"transfer: -{amount}")
            return self.balance
        elif self.balance < amount:
            print('sorry,Balance is less than {amount}')
    
        def take_loan(self,Admin):
          if Admin.on_loan_fetuer:
            loan_amount = self.balance * 2
            self.balance += loan_amount
          
          else:
            return "sorry , You are not get the loan"

        def __repr__(self):

            Account_Holder_details = f"{self.name} and {self.blance}"
            return Account_Holder_details

          






# class User:
#     def __init__(self, name, email):
#         self.name = name
#         self.email = email


# class Acc_holder(User):
#     def __init__(self, name, email, address, initial_deposit):
#         super().__init__(name, email)
#         self.address = address
#         self.balance = initial_deposit
#         self.loan = 0
#         self.transaction_history = []

  
#     def balance(self):
#         return self.balance

   
#     def loan(self):
#         return self.loan

#     def deposit(self, amount):
#         self.__balance += amount
#         self.record_transaction("Deposit", amount)

#     def withdraw(self,amount):
#         if amount < self.min_withdraw :
#             print( f'you cannot withdraw less than 500 Tk')
#         elif amount > self.max_withdraw :
#             print('Bank is bankrupt')
#         else:
#             self.balance -= amount
#             print(f'Here is your money {amount}')
    
#             self.transaction_history.append(f"withdraw: -{amount}")
#     def check_balance(self):
      
        
#         print(f" Balance: {self.balance}")
        

#     def transfer(self,reciever_ac,amount):
#         if self.balance >= amount:
#             self.balance -=amount
#             reciever_ac.deposit(amount)
#             self.transaction_history.append(f"transfer: -{amount}")
#             return self.balance
#         elif self.balance < amount:
#             print('sorry,Balance is less than {amount}')
            
    

#     def take_loan(self,Admin):
#           if Admin.on_loan_fetuer:
#             loan_amount = self.balance * 2
#             self.balance += loan_amount
          
#           else:
#             return "sorry , You are not get the loan"
    
#     def __repr__(self):
#         acc_holder_details = f"Name: {self.name}\n"
#         acc_holder_details += (
#             f"Balance: {self.balance}"
#         )
#         return acc_holder_details


# class Admin(User):
#     def __init__(self, name, email, password):
#         super().__init__(name, email)
#         self.password = password

#     def create_new_account(self, account, bank):
#         bank.create_new_account(account)

#     def total_bank_balance(self, bank):
#         return bank.total_bank_balance()

#     def total_loan_given(self, bank):
#         return bank.total_loan_given()

    