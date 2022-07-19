//#include <iostream>
//using namespace std;
//
//int main()
//{
//	//算数运算符-加减乘除
//	int a1 = 10;
//	int b1 = 3;
//
//	cout << a1 + b1 << endl;
//	cout << a1 - b1 << endl;
//	cout << a1 * b1 << endl;
//
//	cout << a1 / b1 << endl;//两个int类型相除得整数，将小数部分去除
//
//
//	int a2 = 10;
//	int b2 = 20;
//	cout << a2  / b2 << endl;//省略小数部分
//
//	int a3 = 10;
//	int b3 = 0;
//	//cout << a3 / b3 << endl;//除数不可为0，结果无法输出
//
//	//两个小数相除
//	double a4 = 10.1;
//	double b4 = 0.5;
//	cout << a4 / b4 << endl;//运算结果是小数
//
//
//
//	//算数运算符-取模运算
//	//本质是求余数
//	int a5 = 10;
//	int b5 = 3;
//	cout << a5 % b5 << endl;
//
//	int a6 = 10;
//	int b6 = 20;
//	cout << a6 % b6 << endl;
//
//	int a7 = 10;
//	int b7 = 0;
//	//除数不可为0，无法取模
//	cout << a7 % b7 << endl;
//
//	//两个小数无法做取模运算
//
//
//	//算数运算符-递增递减
//	//1.前置递增
//	int a = 10;
//	++a;
//	cout << "a=" << a << endl;
//
//	//2.后置递增
//	int b = 10;
//	b++;
//	cout << "b=" << b << endl;
//
//	//二者区别
//	//前置递增，先+1，再进行表达式运算
//	//后置递增，先进行表达式运算，后+1
//	int c = 10;
//	int d = ++c * 10;
//	cout << "c=" << c << endl;//11
//	cout << "d=" << d << endl;//110
//	
//	
//	int c1 = 10;
//	int d1 = c1++ * 10;
//	cout << "c1=" << c1 << endl;//11
//	cout << "d1=" << d1 << endl;//100
//	return 0;
//}