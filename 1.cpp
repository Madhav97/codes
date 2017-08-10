#include <iostream>
using namespace std;
void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}
void heapify(int arr[], int n, int i)
{
	int largest = i;
	int l = 2*i+1;
	int r = 2*i+2;
	
	if(l<n && arr[largest]<arr[l])
		largest = l;
	if(r<n && arr[largest]<arr[r])
		largest = r;
	if(largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}
void heapsort(int arr[], int n)
{
	for(int i=n/2-1;i>=0;i--)
		heapify(arr, n, i);
	for(int i=n-1;i>=0;i--)
	{
		swap(&arr[i], &arr[0]);
		heapify(arr, i, 0);
	}
}
void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int n;
	cout<<"Enter n\n";
	cin>>n;
	cout<<"Enter elements of  the array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	heapsort(arr, n);
	print(arr, n);
}
