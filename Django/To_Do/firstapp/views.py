from django.shortcuts import render, redirect
from django.urls import reverse_lazy
from .forms import TaskModelForm
from django.views.generic import CreateView, ListView
from django.views.generic.edit import UpdateView, DeleteView
from .models import TaskModel

# Create your views here.
class TaskView(CreateView):
    model = TaskModel 
    form = TaskModelForm
    template = 'add.html'
    success_url = reverse_lazy('show_task') 

def show_task(request):
    task_data = TaskModel.objects.get()

    return render(request, 'show.html', {'data': task_data})

class UpdateTaskView(UpdateView):
    model = TaskModel
    form_class = TaskModelForm
    template_name = 'add.html'
    success_url = reverse_lazy('show')

class DeleteTaskView(DeleteView):
    model = TaskModel
    template_name = 'delete.html'
    success_url = reverse_lazy('show')

class CompleteTaskView(ListView):
    model = TaskModel
    template_name = 'complete.html'

    def ContextData(self, **kwargs):
        context = super().get_context_data(**kwargs)
        return context

def completeTask(request, id):
    task_data = TaskModel.objects.get(pk = id)
    task_data.save()
    return redirect('complete') 


