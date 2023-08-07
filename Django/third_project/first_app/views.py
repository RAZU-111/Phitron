from django.shortcuts import render
def contract (request):
    return render (request,'./first_app/index.html',{'author':'RAZU','courses':[
        
       { 'id' : 1,
        'course':'c',
        'teacher':'karim'
        },
       
       { 'id' : 2,
        'course':'c++',
        'teacher':'Rahim'
        },
       
       { 'id' : 3,
        'course':'c++',
        'teacher':'Fahim'
        },
    ]})

# Create your views here.
