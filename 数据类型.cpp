//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//短整型(-32768-32767) 
//	short num1 = 32768;
//	//超出范围，输出-32768
//	
//	//整型
//	int num2 = 10;
//
//	//长整型
//	long num3 = 10;
//
//	//长长整型
//	long long num4 = 10;
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//	cout << "num3=" << num3 << endl;
//	cout << "num4=" << num4 << endl;
//
//	//sizeof(数据类型/变量)
//	cout << sizeof(int) <<endl;
//	cout << sizeof(num4) << endl;
//
//	//单精度 float 4字节
//	//双精度 double 8字节
//	//默认情况下输出一个小数，显示6位有效数字
//	//数字后加f表明单精度
//	float f1 = 3.14f;
//	double d1 = 3.14;
//	cout << "f1=" << f1 << endl;
//	cout << "d1=" << d1 << endl;
//
//	cout << "f1大小:" << sizeof(f1) << endl;
//	cout << "d1大小:" << sizeof(d1) << endl;
//	
//	//科学计数法
//	float f2 = 3e2; //3*10^2
//	float f3 = 3e-2; //带负号，3*0.1^2
//	cout << "f2=" << f2 << endl;
//	cout << "f3=" << f3 << endl;
//
//
//	//字符型
//	//1.创建方式
//	char ch = 'a';
//	cout << ch << endl;
//
//	//2.所占内存大小
//	cout << "ch所占内存大小：" << sizeof(ch) << endl;
//	
//	//3.字符型变量对应ASCII值
//	cout << (int)ch << endl;//强制把char转成int
//
//
//	//转义字符
//	
//	//换行符\n
//	cout << "helloworld\n";
//
//	//输出反斜杠 \\ 
//	cout << "反斜杠" << "\\"  << endl;
//
//	//制表符\t
//	//\t占8个字符，看之前的内容占几个字符
//	cout << "aaa\thelpowo" << endl;
//	cout << "aa\thelpowo" << endl;
//	cout << "aaaa\thelpowo" << endl;
//	cout << "aaaaaaaa\thelpowo" << endl;
//
//
//	//字符串
//	//1.C风格字符串
//	//注意事项：变量名后有一对中括号
//	//注意事项：等号后用“”
//	char str1[] = "hello";
//	cout << str1 << endl;
//
//	//2.C++风格字符串
//	//注意事项：加头文件#include <string>
//	string str2 = "world";
//	cout << str2 << endl;
//
//
//	//bool类型
//	//创建
//	bool flag = true;
//	cout << flag << endl;
//
//	flag = false;
//	cout << flag << endl;
//
//	//占内存多少
//	cout << sizeof(flag) << endl;
//	
//	
//	
//	
//	//数据输入
//	//
//	
//	return 0;
//
//
//}