#include<iostream>
#include<stdlib.h>
using namespace std;
class cll
{
struct list
{
int data;
struct list *next;
}*head;
public:
typedef struct list node;
cll();
void create();
void insert();
void insertatmid();
void insertatbeg();
void insertatend();
void deletepos();
int count();
void search();
void display();
};
cll::cll()
{
head=NULL;
}
int main()
{
int ch,c;
cll obj;
do
{
cout<<"\n\tMAIN MENU\n";
cout<<"\t\t1.Create\n\t\t2.Display\n\t\t3.Insert\n\t\t4.Deletepos\n\t\t5.Count\n\t\t6.Search\n\t\t7.Exit\n";
cout<<"Enter your choice : ";
cin >> ch;
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
case 6: obj.search();
	break;
case 5: c=obj.count();
	cout<<"Number of elements in the list are : " << c << endl;
	break;
case 7: exit(0);
}
}while(ch>0 && ch<8);
}
int cll::count()
{
node *p;
int c=0;
p=head;
if(head!=NULL){
do
{
p=p->next;
c++;
}while(p!=head);
}
return(c);
}
void cll::create()
{
node *temp,*p;
temp=new node;
cout<<"Enter an element : ";
cin >> temp->data;
if(head==NULL)
{
temp->next=temp;
head = temp;
}
else
{
p=head;
while(p->next!=head)
p=p->next;
temp->next=head;
p->next=temp;
}
}
void cll::display()
{
node *q;
q=head;
cout<<"\nElements in the list are \n";
if(head != NULL)
{
do {
cout<<"->"<<q->data;
q = q->next;
}while(q!=head);
}
else
{
cout<<"list is empty";
}
}
void cll::search()
{
int found=0;
int k;
node*p;
p=head;
cout<<"Enter the element you want to find : ";
cin>>k;
do
{
if(p->data==k)
{
found=1;
cout<<"Element found";
}
else
p=p->next;
}while((p!=head)&&(found==0));
if(found==0)
{
cout<<"Element not found";
}
}
void cll::deletepos()
{
node *p,*p1;
int pos,i,k;
cout<<"\nEnter the element you want to delete : ";
cin >> pos;
p=head;
if(p->data==pos)
{
p1=p->next;
if(p1==p)
{
p=NULL;
head=p;
cout << "\nThe node is deleted ";
}
else
{
while(p->next!=head)
p=p->next;
p->next=p1;
head=p1;
cout<<"\nThe node is deleted";
}
}
else
{
while(p->next!=head)
{
if((p->next)->data==pos)
{
p1=p->next;
p->next=p1->next;
p1->next=NULL;
delete p1;
cout <<"\nThe node is deleted";
}
else
p=p->next;
}
}
}
void cll::insert()
{
int ch;
do
{
cout<<"\n\t\t1.Insert_at_beg\n\t\t2.Insert_at_mid\n\t\t3.Insert_at_end\n\t\t4.Display\n\t\t5.EXIT\n";
cout<<"Enter your choice : ";
cin >> ch;
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
}while(ch>0 && ch<6);
}
void cll::insertatbeg()
{
node *temp,*p;
temp=new node;
cout <<"Enter the element to be inserted : ";
cin >> temp->data;
p=head;
while(p->next!=head)
p=p->next;
p->next=temp;
temp->next=head;
head=temp;
}
void cll::insertatmid()
{
node *temp,*p;
int key;
temp=new node;
cout<<"\nEnter the element : ";
cin >> temp->data;
cout<<"\nEnter the key element : ";
cin>>key;
p=head;
do
{
if(p->data==key)
{
temp->next=p->next;
p->next=temp;
}
p=p->next;
}while(p!=head);
}
void cll::insertatend()
{
node *temp,*p;
temp=new node;
cout<<"Enter an element : ";
cin >> temp->data;
if(head==NULL)
{
temp->next=temp;
head = temp;
}
else
{
p=head;
while(p->next!=head)
p=p->next;
temp->next=head;
p->next=temp;
}
}
