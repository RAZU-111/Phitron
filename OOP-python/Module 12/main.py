from bank import Bank
from users import User, Admin


def main():
    
        bank = Bank('abc')

        user1 = bank.create_new_account()

        user2=bank.create_new_account()

        print("User1 balance",user1.balace)
        print("User2 balance",user2.balace)


if __name__ == "__main__":
    main()
