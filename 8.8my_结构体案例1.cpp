//#include <iostream>
//#include <string>
//using namespace std;
////ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ���������£�
//// 
////- ���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
////- ѧ���ĳ�Ա�����������Է�����
//// ����������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
////- ���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
//
//
////ѧ���ṹ��
//struct  Student
//{
//	//����
//	string name;
//
//	//����
//	int score;
//};
//
////��ʦ�ṹ��
//struct Teacher
//{
//	//����
//	string name;
//
//	//5��ѧ������
//	struct  Student stuArr[5];
//
//};
//
//////��ѧ����ֵ
////void addStu(struct Student* p1, string a,int b)
////{
////	p1->name = a;
////	p1->score = b;
////}
//
////����ʦ��ѧ����ֵ
//void addTea1(struct Teacher* p2,string a)
//{
//	p2->name = a;
//}
//
////����ʦ��ѧ���ṹ�帳ֵ
//void addTea2(struct Teacher* p2, string a, int b,int i)
//{
//	struct Student* p4 = p2->stuArr;
//	(p2->stuArr)[i].name = a;
//	(p2->stuArr)[i].score = b;
//}
//
////�������
//void priTea(struct Teacher* p3)
//{
//	cout << "��ʦ����" << p3->name << endl;
//
//	struct Student* p4 = p3->stuArr;
//
//	for (int i = 0; i < sizeof(p3->stuArr); i++)
//	{
//		cout << "ѧ��" << i + 1 << "������" << p4->name << "   ����"<< p4->score << endl;
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
//	//��һ����ʦ
//	teaArr[0].name = "ZHANGSAN";
//
//	//����ѧ�������ͷ�������
//	string stunam1[] = { "aa","bb","cc","dd","ee" };
//	int score1[] = { 10,20,30,40,50 };
//
//	//ѭ��
//	for (int i = 0; i < 5; i++)
//	{
//		addTea2(&teaArr[i], stunam1[i], score1[i], i);
//	}
//
//	//��ӡ���
//	priTea(&teaArr[3]);
//
//
//	return 0;
//}