from django.shortcuts import render

from . import meals

def index(request):
    

    content = {
        'meals': meals
    }
    return render(request, 'index.html', content)