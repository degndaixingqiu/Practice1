#include <iostream>
using namespace std;
int main()
{
	//冒泡排序
	//1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
	//2.对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
	//3.重复以上的步骤，每次比较次数 - 1，直到不需要比较

	int arr[] = { 4,6,3,2,100,9,23,1 };
	int size = sizeof(arr) / sizeof(arr[0]);//元素个数5

	cout << "排序前" << endl;
	for (int m = 0; m < size; m++)
	{
		cout << arr[m] << "  " ;
	}
	cout << endl;
	//外层控制循环次数
	for (int i = 0; i < size; i++)
	{
		//内层进行每次循环的比较
		//第一次内层对比7次，第二次最后一个数确定则对比6次，以此类推
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后" << endl;
	for (int m = 0; m < size; m++)
	{
		cout << arr[m] << "  ";
	}

	return 0;
}
