//#include <iostream>
//using namespace std;
//int main()
//{
//	
//	//1. const修饰指针-常量指针
//	int a = 10;
//	int b = 10;
//
//	const int* p = &a;
//	//指针指向的值不可改，指针指向可以改
//	
//	//*p = 20;错误
//	p = &b;
//
//
//
//	//2. const修饰常量-指针常量
//	int* const p2 = &a;
//
//	//指针指向不可以改，指针指向的值可以改
//	*p2 = 100;//正确
//	//p2 = &b; 错误，指针指向不可以改
//
//
//	//3. const指针和常量均修饰
//	const int* constp3 = &a;
//	
//	//指针指向以及指针指向值均不可修改
//	//*p3 = 300; 错误
//	// p3 = & b; 错误
//
//
//
//	return 0;
//}