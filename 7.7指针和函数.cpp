//#include <iostream>
//using namespace std;
//
////实现了两个数字交换函数
//void swap(int a,int b)
//{ 
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << a << endl;
//	cout << b << endl;
//}
//
////形参是指针变量
//void swap02(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//
//}
//
//
//int main()
//{
//	//指针和函数
//	//1. 值传递
//
//	int a = 1;
//	int b = 2;
//	//swap(a, b);
//
//
//
//	//2. 地址传递
//	//地址传递可以通过更改实参
//	swap02(&a, &b);
//	cout << a << endl;
//	cout << b << endl;
//
//
//
//
//	return 0;
//}