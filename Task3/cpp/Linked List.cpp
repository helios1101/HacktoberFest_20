#include<iostream>
#include<process.h>
#include<cstdlib>
using namespace std;
struct node{
    int info;
    node *next;
}*start,*newptr,*save,*ptr;
node* create(int);
void insert(node*);
void display(node*);
int main()
{
    start=NULL;
    int inf;
    char ch='y';
    while(ch=='y')
    {
    cout<<"enter the information of new node\n";
    cin>>inf;
    system("pause");
    newptr=create(inf);
    insert(newptr);
    display(start);
    cin>>ch;
    }
    return 0;
}
node *create(int n)
{
    ptr= new node;
    ptr->info=n;
    ptr->next=NULL;
    return ptr;

}
void insert(node* np)
{
    if(start==NULL)
    {
        start=np;
    }
    else{
        save=start;
        start=np;
        np->next=save;

    }
}
void display(node *np)
{
    while(np!=NULL)
    {
        cout<<np->info<<"->";
        np=np->next;

    }
}
