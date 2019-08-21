/*Recursive program for Linear search*/
#include<iostream>
using namespace std;
int Rec_Lsearch(int list[],int n,int key);
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
pos=Rec_Lsearch(list,n,key);
if(pos==-1)
cout<<"\nElement not found";
else
cout<<"\nElement found at index " << pos << endl;
}
int Rec_Lsearch(int list[],int n,int key)
{
if(n<=0)
return -1;
if(list[n]==key)
return n;
else
return Rec_Lsearch(list,n-1,key);
}
