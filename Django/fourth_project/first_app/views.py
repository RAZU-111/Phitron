from django.shortcuts import render
def home (request):
    return render (request,'./first_app/Home.html',{'author':'RAZU','courses':[
        
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
def about(request):
    return render(request, './first_app/about.html', {'author' : 'glenn maxwell'})
# Create your views here.
