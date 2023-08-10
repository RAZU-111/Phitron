from django.shortcuts import render
from .forms import infoForm
#from.forms import studentData
from.forms import passwordChecker
def home (request):
    return render (request,'./first_app/Home.html')
    
def about(request):
  if request.method == 'POST':
        print(request.POST)
        email=request.POST.get('email')
        password=request.POST.get('password')
        select=request.POST.get('select')
        print(request.POST)
        return render(request, './first_app/about.html',{'email':email,'password':password,'select':select})
  else:
      return render(request, './first_app/about.html')
    


def submit_form(request):
   
        return render(request, './first_app/form.html')



def Django_form(request):
        if request.method == 'POST':
           form = infoForm(request.POST,request.FILES)
           if form.is_valid():
                #file = form.cleaned_data['file']
               # with open ('./first_app/upload'+ file.name , 'wb+') as destination:
                 #   for chunk in file.chunks():
                   #     destination.write(chunk)
                
                print(form.cleaned_data)
               # return render(request,'./first_app/django_form.html',{'form':form})
        else:
           
            form = infoForm() 
             
        return render(request,'./first_app/django_form.html',{'form':form})
                       
            

def student_form(request):
        if request.method == 'POST':
           form = studentData(request.POST,request.FILES)
           if form.is_valid():
               
                print(form.cleaned_data)
               
        else:
           
            form = studentData() 
             
        return render(request,'./first_app/django_form.html',{'form':form})
                       
def password_validator(request):
        if request.method == 'POST':
           form = passwordChecker(request.POST,request.FILES)
           if form.is_valid():
               
                print(form.cleaned_data)
               
        else:
           
            form = passwordChecker() 
             
        return render(request,'./first_app/django_form.html',{'form':form})
                       