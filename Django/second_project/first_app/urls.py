from django.urls import path
from.import views
urlpatterns = [
    path('contract/',views.contract),
    path('about/',views.about)
]
