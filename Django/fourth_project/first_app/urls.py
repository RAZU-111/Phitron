from django.urls import path
from . import views
urlpatterns = [
    path('', views.home, name = "Homepage"),
    path('about/', views.about, name = "aboutpage"),
]