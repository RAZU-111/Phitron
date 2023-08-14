from django.shortcuts import render,redirect
from book_app.forms  import BookStoreForm
from book_app.models import BookStoreModel
# Create your views here.
def home(request):
    return render(request,'show_book.html')


def book_store(request):
    if request.method == 'POST':
        book = BookStoreForm(request.POST)
        if book.is_valid():
            print(book.cleaned_data)
            book.save(commit=True)
            return redirect('ShowBooks')
    else:
        book = BookStoreForm()
    return render(request,'store_book.html',{'form': book})




def show_books(request):
    book = BookStoreModel.objects.all()
    print(book)
    return render(request,'show_book.html',{'data':book})



def edit_book(request,id):
    book = BookStoreModel.objects.get(pk=id)
    form = BookStoreForm(instance=book)
    if request.method == 'POST':
        book = BookStoreForm(request.POST,instance=book)
        if book.is_valid():
            print(book.cleaned_data)
            book.save(commit=True)
            return redirect('ShowBooks')
    return render(request,'store_book.html',{'form': form})


def delete_book(request,id):
    book = BookStoreModel.objects.get(pk=id).delete()
    # form = BookStoreForm(instance=book)
    # if request.method == 'POST':
    #     book = BookStoreForm(request.POST,instance=book)
    #     if book.is_valid():
    #         print(book.cleaned_data)
    #         book.save(commit=True)
    return redirect('ShowBooks')
    # return render(request,'store_book.html',{'form': form})

