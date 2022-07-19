//#include <iostream>
//#include <string>
//using namespace std;
//
////const使用场景
//struct student
//{
//	//成员列表
//	string name;  //姓名
//	int age;      //年龄
//	int score;    //分数
//};
//
////将函数中形参改为指针，可以减少内存空间占用，且不会复制新的副本
//void printStu(const student *stu)
//{
//	//加入const后，一旦有修改就会报错，避免误操作
//	//stu->age = 200;
//	cout << "姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
//}
//
//int main()
//{
//	//创建结构体变量
//	student s = {"zhangsan",18,200};
//
//	//通过函数来打印信息
//	printStu(&s);
//
//
//
//
//
//
//
//	return 0;
//}