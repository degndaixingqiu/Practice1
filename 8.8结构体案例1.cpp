//#include <iostream>
//#include <string>
//#include <ctime>
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
////赋值
//void wriTea(struct Teacher teaArr[], int len)
//{
//	string nameSeed = "ABCDE";
//	srand((unsigned int)time(NULL));
//
//
//	for (int i = 0; i < len; i++)
//	{
//		teaArr[i].name = "Teacher";
//		teaArr[i].name += nameSeed[i];
//
//		//循环给学生赋值
//		for (int j = 0; j < 5; j++)
//		{
//			teaArr[i].stuArr[j].name = "Student";
//			teaArr[i].stuArr[j].name += nameSeed[j];
//
//			teaArr[i].stuArr[j].score = rand() % 61 + 40;
//		}
//
//	}
//
//}
//
////输出函数
//void priTea(struct Teacher teaArr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名" << teaArr[i].name << endl;
//
//		//循环给学生输出
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名" << teaArr[i].stuArr[j].name << "  学生分数" << teaArr[i].stuArr[j].score << endl;
//		}
//	}
//
//}
//
//
//
//
//int main()
//{
//	struct Teacher teaArr[3];
//
//	//计算数组长度
//	int len = sizeof(teaArr) / sizeof(teaArr[0]);
//
//
//	//赋值函数
//	wriTea(teaArr,len);
//
//	//输出函数
//	priTea(teaArr, len);
//
//
//	return 0;
//}