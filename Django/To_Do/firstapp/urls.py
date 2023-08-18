from django.urls import path
from . import views

urlpatterns = [
    path('', views.AddTaskView.as_view(), name='task_add'),
    path('show/', views.show_task, name='task_show'),
    path('update/<int:pk>', views.UpdateTaskView.as_view(), name='task_update'),
    path('delete/<int:pk>', views.DeleteTaskView.as_view(), name='task_delete'),
    path('complete/', views.CompleteTaskView.as_view(), name='task_complete'),
    path('<int:id>', views.complete_task, name='Task_Ok'),
]