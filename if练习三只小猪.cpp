//#include<iostream>
//using namespace std;
//int main()
//{
//	//三只小猪，分别输入小猪体重，判断哪只最重
//	//A与B比，大的和C比
//
//	int a = 0;
//	cout << "请输入A猪体重" << endl;
//	cin >> a;
//
//	int b = 0;
//	cout << "请输入B猪体重" << endl;
//	cin >> b;
//
//	int c = 0;
//	cout << "请输入C猪体重" << endl;
//	cin >> c;
//
//	if (a != 0 && b != 0 && c != 0)
//	{
//		if (a > b)
//		{
//			if (a > c)
//			{
//				cout << "A猪最重" << endl;
//			}
//			else if (a < c)
//			{
//				cout << "C猪最重" << endl;
//			}
//			else
//			{
//				cout << "AC猪最重" << endl;
//			}
//		}
//		else if (a < b)
//		{
//			if (b > c)
//			{
//				cout << "B猪最重" << endl;
//			}
//			else if (b < c)
//			{
//				cout << "C猪最重" << endl;
//			}
//			else
//			{
//				cout << "BC猪最重" << endl;
//			}
//
//		}
//
//		else
//		{
//
//			if (a > c)
//			{
//				cout << "A猪最重" << endl;
//			}
//			else if (a < c)
//			{
//				cout << "C猪最重" << endl;
//			}
//			else
//			{
//				cout << "ABC猪一样重" << endl;
//			}
//		}
//
//	}
//
//	else
//	{
//		cout << "猪体重不可为0" << endl;
//	}
//	
//
//
//	return 0;
//
//}