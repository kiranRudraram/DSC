/*STACKS USING ARRAYS*/
#include<iostream>
#include<stdlib.h>
#define MAX 5
int top=-1;
int a[5];
using namespace std;
class SUA
{
public:
void pop();
void push();
void display();
};
int main()
{
SUA obj;
int choice;
while(1)
{
cout<<"\t\t1.PUSH\n\t\t2.POP\n\t\t3.DISPLAY\n\t\t4.QUIT\n";
cout<<"\nEnter your choice : ";
cin>>choice;
switch(choice)
{
case 1: obj.push();
	break;
case 2: obj.pop();
	break;
case 3: obj.display();
	break;
case 4: exit(1);
default: cout<<"Wrong choice\n";
}
}
}
void SUA :: push()
{
int pushed_item;
if(top==(MAX-1))
cout<<"Stack overfloa\n";
else
{
cout<<"Enter the item to be pushed in stack : ";
cin>>pushed_item;
top=top+1;
a[top]=pushed_item;
}
}
void SUA :: display()
{
int i;
if(top==-1)
cout<<"stack is empty\n";
else
{
cout<<"stack elements : \n";
for(i=top;i>=0;i--)
cout<<a[i]<<"\n";
}
}
void SUA :: pop()
{
if(top==-1)
cout<<"Stack underflow\n";
else
{
cout<<"Popped element is : " << a[top] << endl;
top=top-1;
}
}
