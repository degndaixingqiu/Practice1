//#include <iostream>
//#include <string>
//using namespace std;
////结构体做函数参数
////将学生传入到一个参数中，打印学生身上的所有信息
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////打印学生信息函数
////1. 值传递
//void printStu1(struct student s1)
//{
//	s1.age = 100;
//	cout << "值传递中学生姓名 " << s1.name;
//	cout << "  值传递中学生年龄 " << s1.age;
//	cout << "  值传递中学生分数 " << s1.score << endl;
//
//}
//
////2. 地址传递
//void printStu2(struct student* p)
//{
//	p->score = 0;
//	cout << "地址传递中学生姓名 " << p->name;
//	cout << "  地址传递中学生年龄 " << p->age;
//	cout << "  地址传递中学生分数 " << p->score << endl;
//
//}
//
//int main()
//{
//	student s1 = { "lisi",21,40 };
//
//
//	//地址传递,函数中修改分数=0
//	printStu2(&s1);
//
//	//地址传递中修改变量数值，将实参变量修改成功
//	//调用值传递函数输出时是修改后的数据
//
//	//值传递
//	//分数=0，但值传递函数并未改变实参中年龄，输出age仍为21
//	printStu1(s1);
//
//
//
//
//}