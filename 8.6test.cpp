//#include <iostream>
//#include <string>
//using namespace std;
////�ṹ������������
////��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////��ӡѧ����Ϣ����
////1. ֵ����
//void printStu1(struct student s1)
//{
//	s1.age = 100;
//	cout << "ֵ������ѧ������ " << s1.name;
//	cout << "  ֵ������ѧ������ " << s1.age;
//	cout << "  ֵ������ѧ������ " << s1.score << endl;
//
//}
//
////2. ��ַ����
//void printStu2(struct student* p)
//{
//	p->score = 0;
//	cout << "��ַ������ѧ������ " << p->name;
//	cout << "  ��ַ������ѧ������ " << p->age;
//	cout << "  ��ַ������ѧ������ " << p->score << endl;
//
//}
//
//int main()
//{
//	student s1 = { "lisi",21,40 };
//
//
//	//��ַ����,�������޸ķ���=0
//	printStu2(&s1);
//
//	//��ַ�������޸ı�����ֵ����ʵ�α����޸ĳɹ�
//	//����ֵ���ݺ������ʱ���޸ĺ������
//
//	//ֵ����
//	//����=0����ֵ���ݺ�����δ�ı�ʵ�������䣬���age��Ϊ21
//	printStu1(s1);
//
//
//
//
//}