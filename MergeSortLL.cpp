#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
node* addFront(node *start,int x)
{
    node *tmp=new node();
    tmp->data=x;
    tmp->next=start;
    return tmp;
}
void printLL(node *start)
{
    node *tmp=start;
    while(tmp)
    {
        cout<<tmp->data<<"  ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void split(node *head,node **a,node **b)
{
    node *slow=head,*fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    *a=head;
    *b=slow->next;
    slow->next=nullptr;
}
node *merge(node *a,node *b)
{
    node *res=NULL;
    if(a==NULL)
        return b;
    else if(b==NULL)
        return a;
    if(a->data<=b->data)
    {
        res=a;
        res->next=merge(a->next,b);
    }
    else
    {
        res=b;
        res->next=merge(a,b->next);
    }
    return res;
}
void mergesort(node **start)
{
    node *head=*start;
    node *a,*b;
    if(head==NULL ||  head->next==NULL)
        return;
    split(head,&a,&b);
    mergesort(&a);
    mergesort(&b);
    *start=merge(a,b);
}
int main()
{
    node *start;
    start=addFront(start, 15);
    start=addFront(start, 10);
    start=addFront(start, 5);
    start=addFront(start, 20);
    start=addFront(start, 3);
    start=addFront(start, 2);    
    printLL(start);
    mergesort(&start);
    printLL(start);
    return 0;
}