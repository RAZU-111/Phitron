from django.db import models

# Create your models here.
class BookStoreModel(models.Model):
    CATEGORY=(
        ('Mystry','Mystry'),
        ('Thirled','Thriled'),
        ('Horror','Horror'),
        ('poem','poem'),
    )
        
       
    ID = models.IntegerField(primary_key=True)
    book_name= models.CharField(max_length=20)
    Author = models.CharField(max_length=20)
    category=models.CharField(max_length=30,choices=CATEGORY)
    first_pub=models.DateField(auto_now_add=True)
    last_pub=models.DateField(auto_now=True)