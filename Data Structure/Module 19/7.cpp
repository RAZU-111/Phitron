#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* nxt;
        node* prv;
};

class DoublyLinkedList{
    public:
        node *head;
        int sz;
        DoublyLinkedList(){
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node* CreateNewNode(int data){
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data){
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL){
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data){
        if(index > sz){
            return;
        }
        if(index==0){
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1){
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    //Deletes the given index O(n)
    void Delete(int index){
        if(index >= sz){
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index){
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL){
            b->nxt = c;
        }
        if(c!= NULL){
            c->prv = b;
        }
        delete a;
        if(index==0){
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse(){
        node *a = head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize(){
        return sz;
    }
    // Returns the data at the given index O(n)
    void swap(int i, int j){
        if(i >= sz || j >= sz){
            cout<<"Index out of bounds.\n";
            return;
        }
        if(i == j){
          return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != i){
            a = a->nxt;
            cur_index++;
        }
        node *b = head;
        cur_index = 0;
        while(cur_index != j){
            b = b->nxt;
            cur_index++;
        }
        // a and b are the nodes at i-th and j-th index respectively
        int temp = a->data;
        a->data = b->data;
        b->data = temp;
    }
    
    // Delete all the nodes with data 0
    void deleteZero(){
        node* a = head;
        while(a != NULL){
            if(a->data == 0){
               node* nxt = a->nxt;
               node* prv = a->prv;
               if(a == head){
                    head = nxt;
                    nxt->prv = NULL;
                }else if(a->nxt == NULL){
                    prv->nxt = NULL;
                }else{
                    prv->nxt = nxt;
                    nxt->prv = prv;
                }
                    delete a;
                    a = nxt;
            }else{
               a = a->nxt;
            }
        }
    }

};


int main(){

    DoublyLinkedList dl1;
    dl1.InsertAtHead(7);
    dl1.InsertAtHead(4);
    dl1.InsertAtHead(6);
    dl1.InsertAtHead(2);
    dl1.InsertAtHead(3);
    dl1.Traverse();

    dl1.swap(1,4);
    cout<<"Sawp(1,4)index: ";
    dl1.Traverse();



    DoublyLinkedList dl2;
    dl2.InsertAtHead(5);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(0);
    dl2.InsertAtHead(2);
    dl2.InsertAtHead(0);
    dl2.Traverse();

    dl2.deleteZero();
    cout<<"DeleteZero: ";
    dl2.Traverse();

    return 0;
}