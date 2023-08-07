from django.shortcuts import render 

from django.http import HttpResponse
def contract(request):
    return HttpResponse('''
                        
                        
                        
                        <h1>This is  contract page</h1>
                        
                        <a href = '/first_app/about/'> About  </a>
                        <br>
                        <a href = '/second_app/courses/'> Courses  </a>
                        <br>
                        <a href = '/second_app/feedback/'> Feedback  </a>
                        
                        
                        '''
                        
                        )
def about(request):
   return HttpResponse('''
                        
                        
                        
                        <h1>This is  About page</h1>
                        
                        <a href = '/first_app/contract/'> Contract  </a>
                        <br>
                        <a href = '/second_app/courses/'> Courses  </a>
                        <br>
                        <a href = '/second_app/feedback/'> Feedback  </a>
                        
                        '''
                        
                        )