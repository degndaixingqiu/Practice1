//#include <iostream>
//using namespace std;
//int main()
//{
//	//数组名用途
//	//1. 可以通过数组名统计整个数组或数组中元素占用内存大小
//	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组占用内存
//	cout << "数组占用内存" << sizeof(arr) << endl;
//	//数组中每个元素占用内存空间
//	cout << "元素占用内存空间" << sizeof(arr[0]) << endl;
//	//数组中元素个数,总内存数除每个元素内存
//	cout << "元素个数" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	//2. 可以通过数组名称查看数组首地址
//	cout << "数组首地址" << arr << endl;
//	cout << "数组中第一个元素地址为：" << &arr[0] << endl;
//	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;//16进制强转10进制
//	cout << "数组中第二个元素地址为：" << &arr[1] << endl;
//
//	//注意事项：数组名是常量，不可以进行赋值操作！
//
//
//	return 0;
//}