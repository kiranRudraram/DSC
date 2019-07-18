#include<iostream.h>
#include<stdlib.h>
using namespace std;
class dll
{
struct list
{
int data;
struct list *next;
struct list *prev;
}*head;
public:
typedef struct list node;
dll();
void create();
void insert();
void display();
int count();
void deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
dll::dll()
{
head=NULL;
}
int main()
{
int ch,c;
dll obj;
do
{
cout<<"\n\tMAIN MENU\n";
cout<<"\t\t1.create\n\t\t2.display\n\t\t3.insert\n\t\t4.deletepos\n\t\t5.count\n\t\t6.Search\n\t\t7.exit\n";
cout<<"\nenter ur choice : ";
cin>>ch;
switch(ch)
{
case 1: obj.create();
	break;
case 2: obj.display();
	break;
case 3: obj.insert();
	break;
case 4: obj.deletepos();
	break;
case 5: c=obj.count();
	cout<<"no of elements in the list are : "<<c;
	break;
case 6: obj.search();
	break;

case 7:
	exit(0);
}
}while(ch>0&&ch<8);
}
void dll::create(){
node *temp,*p;
temp=new node;
cout<<"enter the element : ";
cin>>temp->data;
if(head==NULL)
{
temp->next=head;
temp->prev=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
temp->prev=p;
p->next=temp;
}
}
void dll::display()
{
node *q;
q=head;
cout<<"\nelements in the list are\n";
while(q!=NULL)
{
cout<<"->"<< q->data;
q=q->next;
}
}
int dll:: count()
{
node *p;
int c=0;
p=head;
while(p!=NULL)
{
p=p->next;
c++;
}
return(c);
}
void dll::search()
{
int f=0,k,v,c;
node *p;
p=head;
c=0;
cout<<"\nEnter the element you want to find : ";
cin>>k;
while(p!=NULL)
{
c++;
if(p->data==k)
{
f=1;
cout<<"Element found at "<<c << " position\n";
}
p=p->next;
}
if(f==0)
{
cout<<"Element not found";
}
}
void dll:: insert()
{
int ch;
do
{
cout<<"\n\t\t\t1.inseratbeg\n\t\t\t2.insertatmid\n\t\t\t3.insertatend\n\t\t\t4.display\n\t\t\t5.exit";
cout<<"\nenter ur choice : ";
cin>>ch;
switch(ch)
{
case 1: insertatbeg();
	break;
case 2: insertatmid();
	break;
case 3: insertatend();
	break;
case 4: display();
	break;
}
}while(ch>0&&ch<5
);
}
void dll:: insertatbeg()
{
node *temp;
temp=new node;
cout<<"enter the element to be inserted : ";
cin>>temp->data;
temp->next=head;
temp->prev=NULL;
head->prev=head;
head=temp;
}
void dll::insertatmid()
{
node *temp,*p;
int key;
temp=new node;
cout<<"enter the element : ";
cin>>temp->data;
cout<<"enter the key element : ";
cin>>key;
p=head;
while(p!=NULL)
{
if(p->data==key)
{
p->next->prev=temp;
temp->next=p->next;
p->next=temp;
temp->prev=p;
}
p=p->next;
}
}
void dll:: insertatend()
{
node *temp,*p;
temp=new node;
cout<<"\nenter element : ";
cin>>temp->data;
if(head==NULL)
{
temp->next=head;
temp->prev=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
temp->prev=p;
p->next=temp;
}
}
void dll:: deletepos()
{
node *p,*t,*q;
int pos,i,k;
cout<<"\nenter the position you want to delete : ";
cin>>pos;
if(head!=NULL)
{
if(pos==1)
{
t=head;
head=head->next;
head->prev=NULL;
cout<<t->data<<" is deleted sucesfully\n";
delete(t);
}
else
{
i=1;
p=head;
q=head;
while(i<pos)
{
q=p;
p=p->next;
i++;
}
t=p;
q->next=p->next;
p->next->prev=q;
cout<<t->data<<" is deleted sucesfully\n";
free(t);
}
}
else
cout<<"\n\tLIST Is empty";
}

