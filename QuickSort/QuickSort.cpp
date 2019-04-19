#include<iostream>
using namespace std;

void QuickSort(int *arr, int left, int right)
{
	int l = left;
	int r = right-1;
	int size = right - left;
	if(size>1)
	{
		int pivot = arr[rand()%size+l];//选取随机轴心点
		while(l<r)
		{
		while(arr[r] > pivot && r > l)//从数组右边开始逐个判断是否大于轴心点，如果大于轴心点，从右递减判断下个数左边必须大于右边
		{
			r--;
		}
		while(arr[l] < pivot && l<=r)//从数组左边开始逐个判断是否小于轴心点，如果小于轴心点，从左递加
		{
			l++;
		}
		if(l<r)
		{
			swap(arr[l],arr[r]);
			l++;
		}
		}
		QuickSort(arr,left,l);
		QuickSort(arr,r,right);
	}
}

void printArray(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int size;
	cout<<"input the size of array";
	cin>>size;
	int *arr = new int[size];
	cout<<" the arry";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	QuickSort(arr,0,size);
	printArray(arr,size);

	return 0;
}