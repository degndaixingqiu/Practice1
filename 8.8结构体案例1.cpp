//#include <iostream>
//#include <string>
//#include <ctime>
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
////��ֵ
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
//		//ѭ����ѧ����ֵ
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
////�������
//void priTea(struct Teacher teaArr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ����" << teaArr[i].name << endl;
//
//		//ѭ����ѧ�����
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ������" << teaArr[i].stuArr[j].name << "  ѧ������" << teaArr[i].stuArr[j].score << endl;
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
//	//�������鳤��
//	int len = sizeof(teaArr) / sizeof(teaArr[0]);
//
//
//	//��ֵ����
//	wriTea(teaArr,len);
//
//	//�������
//	priTea(teaArr, len);
//
//
//	return 0;
//}