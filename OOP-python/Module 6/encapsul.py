# encapsulation
class Bank:
    def __init__(self,ac_holder,initial_deposit) -> None:
        self.ac_holder=ac_holder
        self.__balance=initial_deposit
        self._branch='Bannni 15'
    def deposit(self,amount):
        self.__balance +=amount

    def get_balance(self):
        return self.__balance


rafsun= Bank('coto vi',50000)
print(rafsun.ac_holder)
# print(rafsun.__balance)
print(rafsun._branch)


rafsun.deposit(1000)
print(rafsun.get_balance())
