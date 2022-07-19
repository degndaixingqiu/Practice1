//#include <iostream>
//using namespace std;
//int main()
//{
//	//逻辑运算符 非！
//	int a = 10;
//	//在C++中，除了0，均为真，非真为假=0
//	cout << !a << endl;//0
//
//	cout << !!a << endl;//1
//
//
//	//逻辑运算符  与&&
//	int a1 = 10;
//	int b1 = 10;
//
//	//二者均为真
//	cout << (a1 && b1) << endl;//1
//	cout << (!a1 && b1) << endl; //0
//
//	int a2 = 0;
//	int b2 = 0;
//	cout << (a2 && b2) << endl;//均为假，则为假 0
//
//	//同真为真，其余为假
//
//
//
//	//逻辑运算符  或||
//	int a3 = 10;
//	int b3 = 10;
//	cout << (a3 || b3) << endl;//均为1，结果为1
//
//	cout << (a3 || !b3) << endl;//一个为1，结果为1
//
//	cout << (!a3 || !b3) << endl;//均为0，结果为0
//	
//	//同假为假，其余为真
//
//	return 0;
//}