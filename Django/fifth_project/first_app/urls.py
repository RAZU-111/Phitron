from django.urls import path
from .import views
urlpatterns = [
    path('', views.home, name = "Homepage"),
    path('about/', views.about, name = "aboutpage"),
    path('form/', views.submit_form, name = "submit_form"),
    #path('django_form/', views.Django_form, name = "django_form"),
    #path('django_form/', views.student_form, name = "django_form"),
    path('django_form/', views.password_validator, name = "django_form"),
]