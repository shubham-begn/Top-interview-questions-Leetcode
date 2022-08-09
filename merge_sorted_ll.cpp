#include<bits/stdc++.h>
using namespace std;

struct node
{
    node* next;
    int data;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node * merge(node*h1 ,node *h2)
{
    if(h1==NULL) return h2;
    if(h2==NULL) return h1;

    node *nh;

    if(h1->data<h2->data)
    {
         nh=h1;
         h1=h1->next;
    }
    else
    {
        nh=h2;
        h2=h2->next;
    }

    node* tail=nh;

    while(h1!=NULL && h2!=NULL)
    {
        if(h1->data<h2->data)
        {
            tail->next=h1;
            h1=h1->next;
            tail=tail->next;
        }
        else
        {
           tail->next=h2;
            h2=h2->next;
            tail=tail->next; 
        }
    }

    if(h1!=NULL) tail->next=h1;
    if(h2!=NULL) tail->next=h2;
    //  while(nh!=NULL)
    // {
    //     cout<<nh->data<<" ";
    //     nh=nh->next;
    // }
    return nh;
}

int main()
{
    node * h1=new node(1);
    h1->next=new node(3);
    h1->next->next=new node(5);
    node *h2=new node(2);
    h2->next=new node(4);
    h2->next->next=new node(8);

    node * nh=merge(h1,h2);
    while(nh!=NULL)
    {
        cout<<nh->data<<" ";
        nh=nh->next;
    }
}

