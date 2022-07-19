//#include <iostream>
//using namespace std;
//int main()
//{
//	//break使用
//
//
//	//1.出现在switch语句中
//	cout << "请选择难度" << endl;
//	cout << "1.普通" << endl;
//	cout << "2.中等" << endl;
//	cout << "3.困难" << endl;
//	 
//	int select = 0;//创建选择结果变量 
//	cin >> select;
//
//	switch (select)
//	{
//	case 1:
//		cout << "选择普通" << endl;
//		break;//退出switch
//	case 2:
//		cout << "选择中等" << endl;
//		break;
//	case 3:
//		cout << "选择困难" << endl;
//		break;
//
//	default:
//		cout << "未选择" << endl;
//		break;
//	}
//
//	
//	2.出现在循环语句中
//	for (int i = 0; i < 10; i++)
//	{
//		//打印到5退出
//		if (i == 5)
//		{
//			break;//退出
//		}
//		cout << i << endl;
//
//	}
//	
//	
//
//
//	//3. 出现在嵌套循环语句中
//	for (int i = 0; i < 10; i++)
//	{
//
//		for (int n = 0; n < 10; n++)
//		{
//			if (n == 5)
//			{
//				break;
//
//			}
//			cout << "*";
//
//		}
//
//		cout << endl;
//	}
//
//
//
//	return 0;
//
//
//}