//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//	/*ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
//	���磺1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
//	������do��while��䣬�������3λ���е�ˮ�ɻ���*/
//
//	//��λ����100-999����λʮλ��λժ��������ȡ3�η����
//	int num = 100;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//�ܺ�
//	int sum = 0;
//
//	//����
//	int total = 0;
//
//	do
//	{
//		//��λ
//		a = num / 100;
//		//ʮλ
//		b = (num % 100) / 10;
//		//��λ
//		c = num % 10;
//		sum = a * a * a + b * b * b + c * c * c;
//		if (num == sum)
//		{
//			total++;
//			cout << "��" << total << "��ˮ�ɻ���Ϊ��" << num << endl;
//			num++;
//		}
//		else
//		{
//			num++;
//		}
//
//	} while (num < 1000);
//
//	return 0;
//}