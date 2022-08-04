#include<bits/stdc++.h>
using namespace std;
struct node
{
    node * next;
    int data;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
int cnt(node* head)
{   int temp=0;
    node *curr=head;
    while(curr!=NULL)
    {
        temp++;
        curr=curr->next;
    }
    return temp;
}
node *sum(node*head,node*head2)
{   
    int n1=cnt(head);
    int n2=cnt(head2);
    cout<<n1<<" "<<n2<<"\n";
    node *curr,*curr2,*nh,*t;

    if(n1>n2) 
    { 
    curr=head;
    curr2=head2;
    }
    else 
    {
        curr=head2;
        curr2=head;
    }
      nh=curr;
     int temp,rm=0;
    for(;curr!=NULL;)
    {
        temp=curr->data;
        if(curr2!=NULL)
        {
        temp+=curr2->data;
        curr2=curr2->next;
        }
         temp+=rm;

        if(temp>9)
        rm=1;
        else rm=0;

        curr->data=temp%10;
        t=curr;
        curr=curr->next;
    }
    if(rm==1)
   { 
    node * c=new node(rm);
    t->next=c;
    c->next=NULL;
   }

    return nh;
}    
int main()
{   node *head=new node(9);
    head->next=new node(9);
    head->next->next=new node(9);
    head->next->next->next=new node(9);
    head->next->next->next->next=new node(9);
    head->next->next->next->next->next=new node(9);
    head->next->next->next->next->next->next=new node(9);
    head->next->next->next->next->next->next->next=NULL;
    

    node * head2=new node(9);
    head2->next=new node(9);
    head2->next->next=new node(9);
    head2->next->next->next=new node(9);
    head2->next->next->next->next=NULL;

    node * h=sum(head,head2);

    while(h!=NULL)
    {
        cout<<h->data<<" ";
        h=h->next;
    }
}