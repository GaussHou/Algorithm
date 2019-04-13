#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[],int n)
{
	int min;
	for(int k=0;k < n-1; k++)
	{
		min = k;
		for(int j=k;j < n; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(&arr[min], &arr[k]);
	}
}

void printArray(int arr[], int n)
{
	for(int i=0; i < n;i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int n;
	cin >> n;
	int arr[100];
	for(int i=0; i < n; i++)
		cin >> arr[i];
	
	selectionSort(arr, n);
	printArray(arr, n );
	
}