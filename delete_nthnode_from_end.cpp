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

//1 2 3 4 5
//n=5
//n=1
node * deln(node *head,int n)
{
    node*slow=head;
    node* fast=head;

    for(int i=0;i<n;i++)
    fast=fast->next;

    if(fast==NULL)
    return head->next;

    while(fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=slow->next->next;
    return head;

}
int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);

    head=deln(head,5);
    while(head!=NULL) 
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}