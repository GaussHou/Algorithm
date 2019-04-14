#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void insertionSort(int arr[], int n)
{
	int i,j;
	for(int i=1; i < n; i++)
	{
		j = i;
		while(j > 0 && arr[j-1] > arr[j])
		{
			swap(arr[j], arr[j-1]);
			j--;
		}
	}
}

void printArray(int arr[], int n)
{
	for(int i=0;i < n;i++)
		cout << arr[i] <<" ";
}

int main()
{
	int n;
	cin >> n;
	int arr[100];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	insertionSort(arr,n);
	printArray(arr,n);
	
	return 0;
}