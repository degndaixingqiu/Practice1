//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	//������(-32768-32767) 
//	short num1 = 32768;
//	//������Χ�����-32768
//	
//	//����
//	int num2 = 10;
//
//	//������
//	long num3 = 10;
//
//	//��������
//	long long num4 = 10;
//
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//	cout << "num3=" << num3 << endl;
//	cout << "num4=" << num4 << endl;
//
//	//sizeof(��������/����)
//	cout << sizeof(int) <<endl;
//	cout << sizeof(num4) << endl;
//
//	//������ float 4�ֽ�
//	//˫���� double 8�ֽ�
//	//Ĭ����������һ��С������ʾ6λ��Ч����
//	//���ֺ��f����������
//	float f1 = 3.14f;
//	double d1 = 3.14;
//	cout << "f1=" << f1 << endl;
//	cout << "d1=" << d1 << endl;
//
//	cout << "f1��С:" << sizeof(f1) << endl;
//	cout << "d1��С:" << sizeof(d1) << endl;
//	
//	//��ѧ������
//	float f2 = 3e2; //3*10^2
//	float f3 = 3e-2; //�����ţ�3*0.1^2
//	cout << "f2=" << f2 << endl;
//	cout << "f3=" << f3 << endl;
//
//
//	//�ַ���
//	//1.������ʽ
//	char ch = 'a';
//	cout << ch << endl;
//
//	//2.��ռ�ڴ��С
//	cout << "ch��ռ�ڴ��С��" << sizeof(ch) << endl;
//	
//	//3.�ַ��ͱ�����ӦASCIIֵ
//	cout << (int)ch << endl;//ǿ�ư�charת��int
//
//
//	//ת���ַ�
//	
//	//���з�\n
//	cout << "helloworld\n";
//
//	//�����б�� \\ 
//	cout << "��б��" << "\\"  << endl;
//
//	//�Ʊ��\t
//	//\tռ8���ַ�����֮ǰ������ռ�����ַ�
//	cout << "aaa\thelpowo" << endl;
//	cout << "aa\thelpowo" << endl;
//	cout << "aaaa\thelpowo" << endl;
//	cout << "aaaaaaaa\thelpowo" << endl;
//
//
//	//�ַ���
//	//1.C����ַ���
//	//ע���������������һ��������
//	//ע������Ⱥź��á���
//	char str1[] = "hello";
//	cout << str1 << endl;
//
//	//2.C++����ַ���
//	//ע�������ͷ�ļ�#include <string>
//	string str2 = "world";
//	cout << str2 << endl;
//
//
//	//bool����
//	//����
//	bool flag = true;
//	cout << flag << endl;
//
//	flag = false;
//	cout << flag << endl;
//
//	//ռ�ڴ����
//	cout << sizeof(flag) << endl;
//	
//	
//	
//	
//	//��������
//	//
//	
//	return 0;
//
//
//}