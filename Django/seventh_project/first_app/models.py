from django.db import models

# Create your models here.
class StudentModel(models.Model):
    
    roll = models.IntegerField(primary_key=True)
    name = models.CharField(max_length=20)
    father_name = models.CharField(max_length=20)
    address = models.TextField(max_length=30)
    
def __str__(self):
    return f"Name :{self.name}"
 
 
class CommonInfo(models.Model):
   name = models.CharField(max_length=20)
   city= models.CharField(max_length=20)
   class Meta:
        abstract = True
    
     
 
class StudentInfoModel(CommonInfo):
    
    roll = models.IntegerField()
    payment = models.IntegerField()
    section = models.CharField(max_length=20)
    
    
    
class TeacherInfoModel(CommonInfo):
    
    salary = models.IntegerField()
    



class Employee(models.Model):
    name=models.CharField(max_length=20)
    city=models.CharField(max_length=20)
    degination=models.CharField(max_length=10)
    
class manager(Employee):
    take_interview = models.BooleanField()
    hiring = models.BooleanField()
    
# 3. proxy Model
class Friend(models.Model):
    school = models.CharField(max_length=40)
    section : models.CharField(max_length=10)
    attendenc = models.BooleanField()
    hw=models.CharField(max_length=20)
    
    
class Me(Friend):
    class Meta:
        proxy = True




class Person(models.Model):
    name=models.CharField(max_length=20)
    city = models.CharField(max_length=30)
    email= models.EmailField()
   
    def __str__ (self):
        return self.name
    
class Passport(models.Model):
    user=models.OneToOneField(to=Person,on_delete=models.CASCADE)
    pass_num = models.IntegerField()
    page=models.IntegerField()
    validity=models.IntegerField()


class Post(models.Model):
    user=models.ForeignKey(Person,on_delete=models.SET_NULL,null=True)
    post_cap=models.TextField(max_length=100)
    post_details=models.CharField(max_length=50)
    
    

class Student(models.Model):
    
    name=models.CharField(max_length=20)
    class_name=models.CharField(max_length=10)
    roll=models.IntegerField()
    
    def __str__ (self):
        return self.name
class Teacher(models.Model):
    Student=models.ManyToManyField(Student)
    name=models.CharField(max_length=20)
    subject=models.CharField(max_length=30)
    cell=models.CharField(max_length=13)
    