//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//数组元素逆置
//	//请声明一个5个元素的数组，并且将元素逆置.
//
//	int arr[] = { 1,3,2,5,4 };
//	int temp = 0;
//
//	//1.建立新数组放旧数据
//	int arr2[5];
//
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr2[(sizeof(arr) / sizeof(arr[0]) - 1) - i] = arr[i];
//	}
//
//	//int start = 0;//起始下标
//	//int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标
//
//
//	for (int m = 0; m < 5; m++)
//	{
//		cout << "逆置后" << endl;
//
//		cout << arr2[m] << endl;
//	}
//
//
//
//
//
//
//	return 0;
//}