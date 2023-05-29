class Device:
    def __init__(self,brand,color,price,origin,) -> None:
        self.brand =brand
        self.color=color
        self.price=price
        self.origin=origin
    def run(self):
        return f'Runing {self.brand}'


class Laptop:
    def __init__(self,processor,ssd) -> None:
        self.processor=processor
        self.ssd=ssd



class Phone(Device):
    def __init__(self,brand,color,price,origin,ram,rom,sim) -> None:
        self.ram=ram
        self.rom = rom 
        self.sim = sim
        super().__init__(brand,color,price,origin)

    def phone_call(self,number,text):
        
        return f'sending SMS{number} with {text}'
    
    def __repr__(self) -> str:
        return f'{self.brand} {self.color} {self.price} {self.sim} {self.ram} {self.rom}'
    
class Camera:
    def __init__(self,pixel,lence) -> None:
         self.pixel=pixel
         self.lence=lence


my_phone = Phone('iphone','purple',130000,'china',12,256,True)
print(my_phone)
     