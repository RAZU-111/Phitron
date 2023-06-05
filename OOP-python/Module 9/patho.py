from abc import ABC ,abstractmethod
from datetime import datetime

class Ride_Sharing:
    def __init__(self,company_name) -> None:
        self.company_name= company_name
        self.riders=[]
        self.drivers=[]
        self.rides=[]

    def add_riders(self,rider):
        self.riders.append(rider)

    def add_drivers(self,driver):
        self.drivers.append(driver)

    def __repr__(self) -> str:
        return (f'company name :{self.company_name} with riders: {len(self.riders)}and Drivers :{len(self.drivers)}')

class User(ABC) :
    def __init__(self,name,id,email,nid) -> None:
        self.name=name
        self.__id=0
        self.email=email
        self.nid=nid
    
    @abstractmethod
    def display_Profile(self):
       raise  NotImplementedError


class Rider(User):
    def __init__(self, name, id, email, nid,current_location,initial_ammount) -> None:
        self.current_ride = None
        self.wallet=initial_ammount
        self.current_location=current_location
        super().__init__(name, id, email, nid)

    def display_Profile(self):
        print(f'Rider : with name{self.name} and emial{self.email}')
    
    def load_cash(self,amount):
        if amount > 0:
            self.wallet += amount
    
    def update_location(self,current_location):
        self.current_location = current_location
    
    def requst_ride(self,ride_sharing,destination):
        if not self.current_ride:
            ride_request = Ride_Request(self,destination)
            ride_matcher = Ride_Matching(ride_sharing.drivers)
            ride = ride_matcher.find_driver(ride_request)
            print('got the ride ,yay',ride)
            self.current_ride=ride


    def show_current_ride(self):
        print(self.current_ride)

class Driver(User):
    def __init__(self, name, email, nid,current_location) -> None:
        
        super().__init__(name, id, email, nid)
        self.current_location = current_location
        self.wallet=0

    def display_Profile(self):
        print(f'Driver with name :{self.name} and email {self.email}')

    def accept_ride(self,ride):
        ride.set_driver(self)


class Ride:
    def __init__(self,start_location,end_location) -> None:
        self.start_location=start_location
        self.end_location=end_location
        self.driver=None
        self.start_time=None
        self.end_time=None
        self.estimet_fare=None

    def set_driver(self,driver):
        self.driver=driver

    def start_ride(self):
        self.start_time=datetime.now()

    def end_ride(self):
        self.end_ride=datetime.now()

        self.rider.wallet -= self.estimet_fare
        self.driver.wallet += self.estimet_fare

    def __repr__(self) -> str:
        return f'Ride details. strated :{self.start_location} to {self.end_location}'

class Ride_Request :
    def __init__(self,rider,end_location) -> None:
        self.rider = rider 
        self.end_location = end_location


class Ride_Matching :
    def __init__(self,drivers) -> None:
        
        self.available_drivers = drivers

    def find_driver(self,ride_request):
        if len(self.available_drivers) > 0 :
            print('Loking for a driver')
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_location,ride_request.end_location)
            driver.accept_ride(ride)
            return ride


              
class Vehicle(ABC):

    speed ={
        'car' : 60,
        'bike':70,
        'cng':30

    }
    def __init__(self,vehicle_type,lisenc_plate,rate) -> None:
        self.vehicle_type = vehicle_type
        self.license_plate= lisenc_plate
        self.rate = rate
        @abstractmethod
        def start_drive(self):
            pass

class Car(Vehicle):
    def  __init__(self, vehicle_type, lisenc_plate, rate) -> None:
        super().__init__(vehicle_type, lisenc_plate, rate)
    
    def start_drive(self):
        self.status ='unavailable'

class bike(Vehicle):
    def __init__(self, vehicle_type, lisenc_plate, rate) -> None:
        super().__init__(vehicle_type, lisenc_plate, rate)

    def start_drive(self):
        self.status = 'unavailable'


niya_jao = Ride_Sharing('niya jao')
xyz = Rider('xyz',10111,'xyz@abc.com',50012,'dhanmondhi',1000)
niya_jao.add_riders(xyz)
abc = Driver('abc','abc@g,com',22352,'gulshan 2')
niya_jao.add_drivers(abc)
print(niya_jao)
xyz.requst_ride(niya_jao,'uttara')
xyz.show_current_ride()