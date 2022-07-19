//#include <iostream>
//using namespace std;
//
////函数值传递
////定义函数:两个数字交换
//
//void my_swap(int a, int b)
//{
//	cout << "a交换前为" << a << endl;
//	cout << "b交换前为" << b << endl;
//	
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//
//	
//	cout << "a交换后为" << a << endl;
//	cout << "b交换后为" << b << endl;
//	
//}
//
//
//int main()
//{
//	//函数值传递
//	int a = 20;
//	int b = 10;
//	my_swap(a, b);
//
//	//当做值传递时，函数形参发生变化，并不会影响实参
//	//也就是说在此处输出a,b，仍为20,10，实参值并未改变，是由于地址储存的问题
//	//cout << "a交换后为" << a << endl;
//	//cout << "b交换后为" << b << endl;
//
//
//
//	return 0;
//}