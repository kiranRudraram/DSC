 #include<iostream>
#include<stdlib.h>
using namespace std;
class SULL
{
struct stack
{
int data;
struct stack *next;
}*top;
typedef struct stack node;
public:
void push();
int pop();
void display();
SULL();
};
SULL::SULL()
{
top=NULL;
}
int main()
{
SULL obj;
int ch,k;
while(1)
{
cout<<"\n\tMAIN MENU";
cout<<"\n\t1.PUS\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT\n";
cout<<"Enter your choice : ";
cin >> ch;
switch(ch)
{
case 1: obj.push();
	break;
case 2: k=obj.pop();
	cout<<"\nDeleted element from the stack is : " << k;
	break;
case 3: obj.display();
	break;
case 4: exit(1);
default : cout<<"Wrong choice\n";
	  break;
}
}
}
void SULL :: push()
{
node *temp;
int element;
temp=new node;
cout <<"Enter the element to be inserted in stack : ";
cin>>element;
temp->data=element;
temp->next=top;
top=temp;
}
int SULL:: pop()
{
int k;
node *p,*q;
p=top;
k=top->data;
q=top;
top=p->next;
free(q);
return(k);
}
void SULL :: display()
{
node *p;
p=top;
cout<<"\nElement in the stack are \n";
if(top!=NULL)
{
while(p!=NULL)
{
cout<<"->"<<p->data;
p=p->next;
}
}
else
cout<<"Stack is empty\n";
}


