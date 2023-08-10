from django.urls import path
from .import views
urlpatterns = [
    path('', views.home, name = "Homepage"),
    path('', views.index, name = "Mainpage"),
]
