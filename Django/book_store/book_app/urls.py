from django.urls import path 
from book_app.views import home, book_store,show_books,edit_book,delete_book
urlpatterns = [
    path ('',home),
    path ('store_new_book/',book_store,name='StoreBook'),
    path ('show_books/',show_books,name='ShowBooks'),
    path ('edit_book/<int:id>',edit_book,name='EditBook'),
    path ('delete_book/<int:id>',delete_book,name='DeleteBook')
]
