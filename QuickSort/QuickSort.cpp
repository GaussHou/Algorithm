#include<iostream>
using namespace std;

void QuickSort(int *arr, int left, int right)
{
	int l = left;
	int r = right-1;
	int size = right - left;
	if(size>1)
	{
		int pivot = arr[rand()%size+l];//ѡȡ������ĵ�
		while(l<r)
		{
		while(arr[r] > pivot && r > l)//�������ұ߿�ʼ����ж��Ƿ�������ĵ㣬����������ĵ㣬���ҵݼ��ж��¸�����߱�������ұ�
		{
			r--;
		}
		while(arr[l] < pivot && l<=r)//��������߿�ʼ����ж��Ƿ�С�����ĵ㣬���С�����ĵ㣬����ݼ�
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