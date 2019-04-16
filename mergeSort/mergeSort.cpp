#include <iostream>
using namespace std;

void Merge(int *arr, int form, int to, int mid)
{
	int i = form;
	int j = mid+1;
	int k = 0;

	int *temp = new int[to-form+1];

	while(i <= mid && j<=to)
	{
		if(arr[i]<arr[j])
		{
			temp[k] = arr[i];
			k++;i++;
			
		}
		else
		{
			temp[k] = arr[j];
			k++;j++;
			
		}
	}

	while(i<=mid)
	{
		temp[k] = arr[i];
		k++;i++;
		
	}
	while(j<=to)
	{
		temp[k] = arr[j];
		k++;j++;
		
	}
	for(int i=form; i <= to;i++)
	{
		arr[i] = temp[i -form];
	}
}

void MergeSort(int *arr, int form, int to)
{
	int mid;
	if(form < to)
	{
		mid = (form+to)/2;
		MergeSort(arr, form, mid);
		MergeSort(arr, mid+1, to);

		Merge(arr, form, to, mid);
	}
}

int main()
{
	cout<<"需要输入的数据个数： ";
	int n;
	cin >> n;
	int *arr = new int[n];
	cout <<"输入需要排序的数据： "<<endl;
	for(int i=0;i < n; i++)
	{
		cin >> arr[i];
	}

	MergeSort(arr, 0,n-1);
	
	for(int i=0; i < n; i++)
		cout<<arr[i]<<" ";

	return 0;
}