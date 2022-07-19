//#include <iostream>
//using namespace std;
//int main()
//{
//	// 二维数组数组名
//
//	//1.查看二维数组所占内存空间
//
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//
//	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
//	cout << "二维数组第一行内存空间为：" << sizeof(arr[0]) << endl;
//	cout << "二维数组第一个元素内存空间为：" << sizeof(arr[0][0]) << endl;
//
//	cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "二维数组列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//
//
//	//2.获取二维数组首地址
//
//	cout << "二维数组首地址：" << arr[0][0] << endl;
//	cout << "二维数组第一行首地址：" << arr[0] << endl;
//	cout << "二维数组第二行首地址：" << arr[1][0] << endl;
//	
//	//看第一个元素首地址要用&取址符
//	cout << "二维数组第一个元素首地址：" << &arr[0][0] << endl;
//	cout << "二维数组第二个元素首地址：" << &arr[0][1] << endl;
//	return 0;
//}