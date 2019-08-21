/* CPP program for Merge Sort */
#include<iostream>
using namespace std;  
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int L[n1], R[n2];
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	i = 0; 
	j = 0; 
	k = l; 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	}
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
void mergesort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{
		int m = l+(r-l)/2; 
		mergesort(arr, m+1, r);
		mergesort(arr, l, m);
		merge(arr, l, m, r); 
	} 
}
int main()
{
	int n,i;
	int list[30];
	cout<<"Enter no of elements\n";
	cin>>n;
	cout<<"Enter " << n << " numbers";
	for(i=0;i<n;i++)
		cin>>list[i];
	mergesort(list,0,n-1);
	cout<<"After sorting\n";
	for(i=0;i<n;i++)
		cout<<list[i]<<endl;
	return 0;
}
