/*queue using arrays*/
#include<iostream>
#include<stdlib.h>
#define MAX 4
int q[MAX],front=-1,rear=-1;
using namespace std;
class QUA
{
public:
void enqueue();
void dequeue();
void display();
};
int main()
{
QUA obj;
int ch;
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
case 2: obj.dequeue();
	break;
case 3: obj.display();
	break;
case 4: exit(1);
default : cout<<"!!Wrong Choice!!";
}
}
}
void QUA :: enqueue()
{
int element;
if(rear == MAX-1)
cout<<"Queue is full and insertion is not possible\n";
else
{
if(front==-1)
front=0;
cout<<"\nEnter the element to be inserted into the queue: ";
cin>>element;
rear=rear+1;
q[rear]=element;
cout<<"\nInsertion Success!!";
}
}
void QUA :: dequeue()
{
if(front==-1)
cout<<"\nQueue is empty and deletion is not possible!!";
else
{
cout<<"Deleted element from queue is : " << q[front];
front=front+1;
}
}
void QUA :: display()
{
int i;
if(rear == -1)
cout<<"queue is empty\n";
else
{
cout<<"queue elements are : \n";
for(i=front;i<=rear;i++)
cout<<q[i]<<endl;
}
} 
