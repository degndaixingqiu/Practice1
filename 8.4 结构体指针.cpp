//#include <iostream>
//#include <string>
//using namespace std;
//
////结构体指针
//struct Student
//{
//	//姓名
//	string name;
//	//年龄
//	int age;
//	//分数
//	int score;
//};
//
//
//
//
//int main()
//{
//	//1. 创建学生结构体变量
//
//	Student s1 = { "zhangsan",18,100 };
//
//	//2. 通过指针指向结构图变量
//
//	Student* p = &s1;
//
//	p->age = 50;
//
//	//3. 通过指针访问结构体变量中数据
//	//通过结构体指针访问结构体中属性，需要利用“->”
//
//	cout << "  姓名：" << p->name << "  年龄  " << p->age << "  考试分数  " << p->score << endl;
//
//	return 0;
//}