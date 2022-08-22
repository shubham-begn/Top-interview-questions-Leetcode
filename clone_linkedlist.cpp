#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
    node* random;

    node(int x)
    {
        data=x;
        next=NULL;
        random=NULL;
    }
};

node * clone(node*head)
{
    node *curr=head;
    while(curr!=NULL)
    {
        node * temp=new node(curr->data);
        temp->next=curr->next;
        curr->next=temp;

        curr=curr->next->next;

    }
    curr=head;
    while(curr!=NULL)
    {
        if(curr->random==NULL)
        curr->next->random=NULL;

        else
        {
            curr->next->random=curr->random->next;
        }
        curr=curr->next->next;
    }
    node*nh=head->next;
    node *first=head,*second=head->next;
    while(first!=NULL && second!=NULL)
    {   if(first->next!=NULL)
       {
        first->next=first->next->next;
        first=first->next;
       }
     else{
         first->next=NULL;
     }
        if(second->next!=NULL)
        {second->next=second->next->next;
       
        }
     else second->next=NULL;
     
     second=second->next;
    }
    return nh;
}
int main()
{
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
   node* nh= clone(head);
   while(nh!=NULL)
   {
    cout<<nh->data<<" ";
    nh=nh->next;
   }
}