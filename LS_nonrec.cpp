/*Non recursive program for linear search*/
#include<iostream>
using namespace std;
int Lsearch(int list[],int n,int key);
int main()
{
int n,i,key,list[25],pos;
cout<<"Enter number of elements\n";
cin>>n;
cout<<"Enter " << n << " elements";
for(i=0;i<n;i++)
cin>>list[i];
cout<<"Enter key to search";
cin>>key;
pos=Lsearch(list,n,key);
if(pos==-1)
cout<<"\nElement not found";
else
cout<<"\nElement found at index " << pos;
}
int Lsearch(int list[],int n,int key)
{
int i,pos=-1;
for(i=0;i<n;i++)
if(key==list[i])
{
pos=i;
}
return pos;
}
