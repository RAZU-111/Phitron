#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node* Left;
    node* Right;
};

class BST
{
public:
    node *root;
    BST()
    {
        root = NULL;
    }
    node* CreateNewNode(int value)
    {
        node* newNode = new node;
        newNode->value = value;
        newNode->Left = NULL;
        newNode->Right = NULL;
        return newNode;
    }
    void Insert(int value)
    {
        node* a = CreateNewNode(value);
        if(root==NULL)
        {
            root = a;
            return;
        }
        node* cur = root;
        node* pre = NULL;
        while(cur!=NULL)
        {
            if(a->value > cur->value)
            {
                pre = cur;
                cur = cur->Right;
            }
            else
            {
                pre = cur;
                cur = cur->Left;
            }
        }
        if(a->value > pre->value)
        {
            pre->Right = a;
        }
        else
        {
            pre->Left = a;
        }
    }
    bool Search(int value)
    {
        if(root==NULL)
        {
            return false;
        }
        node* cur = root;
        while(cur!=NULL)
        {
            if(cur->value < value)
            {
                cur = cur->Right;
            }
            else if(cur->value > value)
            {
                cur = cur->Left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    BST b;
    b.Insert(5);
    b.Insert(10);
    b.Insert(15);
    b.Insert(20);
    b.Insert(30);
    b.Insert(40);
    cout<<b.Search(10)<<"\n"; 
    cout<<b.Search(15)<<"\n"; 
    cout<<b.Search(20)<<"\n"; 
    cout<<b.Search(60)<<"\n"; 
    return 0;
}