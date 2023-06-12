import random
class Bank:
   

    def __init__(self, name):
        self.name = name
        self.accounts = []
       
        self.total_balance = 0
        self.total_loan = 0

    def create_new_account(self,account):
        account = self.create_Ac_no()
        self.accounts.append(account)

    def create_Ac_no(self):
        self.ac_no += random
        return self.ac_no
        
    def total_balance(self):
        return self.total_balance
    
    

    