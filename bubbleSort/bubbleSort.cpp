/*
冒泡算法C++实现
1.两个循环，外循环N（元素个数）次，内循环递减
2.设立转换标志，转换标志为false时，直接跳出循环，此操作为优化算法
*/

#include <iostream>
using namespace std;


void swap(int *a, int *b)//交换两个元素，使用指针
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n)//冒泡排序算法主程序
{
	bool swapped;//定义交换标志变量
	for(int i=0; i < n-1; i++)
	{
		swapped = false;
		for(int j=0; j < n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}
		if(swapped == false)
			break;
	}
}

void printArray(int arr[], int n)
{
	for(int i=0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)//输入元素
    {
        cin>>arr[i];
    }
	bubbleSort(arr,n);
	printArray(arr,n);
	
	return arr[100];
}