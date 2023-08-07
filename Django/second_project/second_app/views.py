from django.shortcuts import render 

from django.http import HttpResponse
def courses(request):
    return HttpResponse('''
                        
                        
                        
                        <h1>This is  courses page</h1>
                        
                        <a href = '/second_app/feedback/'> Feedback  </a>
                        <br>
                        <a href = '/first_app/about/'> About  </a>
                        <br>
                        <a href = '/first_app/contract/'> contract  </a>
                        
                        
                        '''
                        
                        )
def feedback(request):
   return HttpResponse('''
                        
                        
                        
                        <h1>This is  feedback page</h1>
                        
                        <a href = '/second_app/courses/'> Courses  </a>
                        <br>
                        <a href = '/first_app/about/'> About  </a>
                        <br>
                        <a href = '/first_app/contract/'> contract  </a>
                        
                        '''
                        
                        )