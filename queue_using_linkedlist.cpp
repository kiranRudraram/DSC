/*queue using linked list*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class QULL
{
struct queue
{
int data;
struct queue *next;
}*front,*rear;
public:
typedef struct queue node;
void enqueue();
int dequeue();
void display();
QULL();
};
QULL::QULL()
{
front=NULL;
rear=NULL;
}
int main()
{
QULL obj;
int ch,k;
while(1)
{
cout<<"\n\tMAIN_MENU\n";
cout<<"\t\t1.INSERTION\n\t\t2.DELETION\n\t\t3.DISPLAY\n\t\t4.EXIT\n";
cout<<"Enter your choice: ";
cin>>ch;
switch(ch)
{
case 1: obj.enqueue();
	break;
case 2: k=obj.dequeue();
	cout << "\nDeleted element from the queue is : " << k;
	break;
case 3: obj.display();
	break;
case 4: exit(1);
default : cout<<"!!Wrong Choice!!";
}
}
}
void QULL :: enqueue()
{
node *temp;
temp=new node;
cout<<"\nEnter the element to be inserted in the queue : ";
cin>>temp->data;
if(front==NULL)
{
temp->next=front;
front=rear=temp;
}
else
{
temp->next=rear->next;
rear->next=temp;
rear=temp;
}
}
int QULL :: dequeue()
{
int k;
node *p;
if(front!=NULL)
{
k=front->data;
p=front;
front=front->next;
free(p);
return(k);
}
}
void QULL :: display()
{
node *p;
p=front;
cout<<"\nElements in the queue are : \n";
if(front!=NULL)
while(p!=NULL)
{
cout<<"->"<<p->data;
p=p->next;
}
else
cout<<"Queue is empty";
}
