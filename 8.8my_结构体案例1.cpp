//#include <iostream>
//#include <string>
//using namespace std;
////学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：
//// 
////- 设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
////- 学生的成员有姓名、考试分数，
//// 创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
////- 最终打印出老师数据以及老师所带的学生数据。
//
//
////学生结构体
//struct  Student
//{
//	//姓名
//	string name;
//
//	//分数
//	int score;
//};
//
////老师结构体
//struct Teacher
//{
//	//姓名
//	string name;
//
//	//5个学生数组
//	struct  Student stuArr[5];
//
//};
//
//////给学生赋值
////void addStu(struct Student* p1, string a,int b)
////{
////	p1->name = a;
////	p1->score = b;
////}
//
////给老师和学生赋值
//void addTea1(struct Teacher* p2,string a)
//{
//	p2->name = a;
//}
//
////给老师中学生结构体赋值
//void addTea2(struct Teacher* p2, string a, int b,int i)
//{
//	struct Student* p4 = p2->stuArr;
//	(p2->stuArr)[i].name = a;
//	(p2->stuArr)[i].score = b;
//}
//
////输出数据
//void priTea(struct Teacher* p3)
//{
//	cout << "老师姓名" << p3->name << endl;
//
//	struct Student* p4 = p3->stuArr;
//
//	for (int i = 0; i < sizeof(p3->stuArr); i++)
//	{
//		cout << "学生" << i + 1 << "号姓名" << p4->name << "   分数"<< p4->score << endl;
//
//	}
//
//}
//
//
//
//int main()
//{
//
//	struct Teacher teaArr[3];
//
//	//第一个老师
//	teaArr[0].name = "ZHANGSAN";
//
//	//建立学生姓名和分数数组
//	string stunam1[] = { "aa","bb","cc","dd","ee" };
//	int score1[] = { 10,20,30,40,50 };
//
//	//循环
//	for (int i = 0; i < 5; i++)
//	{
//		addTea2(&teaArr[i], stunam1[i], score1[i], i);
//	}
//
//	//打印输出
//	priTea(&teaArr[3]);
//
//
//	return 0;
//}