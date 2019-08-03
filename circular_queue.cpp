/*CIRCULAR QUEUE*/
#include<iostream>
#include<stdlib.h>
#define max 5
int cq[max],ele,temp,front=-1,rear=-1,ch;
using namespace std;
class circularQ
{
public:
void enqueue();
void dequeue();
void display();
};
int main()
{
circularQ obj;
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
void circularQ :: enqueue()
{
if((front==0)&&(rear==max-1)||(front==rear+1))
cout<<"\nQueue is overflow";
else
{
cout<<"\nEnter the element : ";
cin>>ele;
if(front==-1)
{
front=0;
rear=0;
}
else if(rear==max-1)
{
rear=0;
cq[rear]=ele;
}
else
rear=rear+1;
}
cq[rear]=ele;
}
void circularQ :: dequeue()
{
if(front==-1)
cout<<"QUEUE Underflow\n";
else
ele=cq[front];
if(front==rear)
{
front=-1;
rear=-1;
}
else if(front == max-1)
front=0;
else
front++;
cout<<"The deleted element is : " << ele;
}
void circularQ :: display()
{
int i;
if(rear == -1)
cout<<"queue is empty\n";
else if(front<=rear)
{
cout<<"\nThe circular queue elements are : \n";
for(i=front;i<=rear;i++)
cout<<"\t"<<cq[i];
}
} 
