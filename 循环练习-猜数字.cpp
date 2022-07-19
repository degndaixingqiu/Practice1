//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	//猜数字
//	//系统随机生成1-100，玩家猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
//	
//
//	//1.
//	//用下列公式即可得到指定范围[m,n]的随机数：
//	//r = rand() % (n - m + 1) + m;
//	//rand()随机数生成是一次性的,不论程序运行几次，此次生成随机数均相同，与srand函数有关
//
//	//2.
//	//srand()用来设置rand()产生随机数时的随机数种子。
//	//在调用rand()函数产生随机数前，必须先利用srand()设好随机数种子（seed），使得每次运行生成随机数不同
//	//如果未设随机数种子, rand()在调用时会自动设随机数种子为1。
//
//	//3.
//	//time函数，返回一个以tm结构表达的机器时间信息，单位是s
//	//time(0)也就是time(NULL)的另一种写法，表示只通过返回值获取时间值。
//	//使用前加头文件 #include <ctime>
//
//
//	//生成随机数
//	srand((int)time(0));
//	int a = rand() % 100 + 1;
//	cout << a << endl;
//
//
//	int gus = 0;
//	cout << "输入猜测数字：" << endl;
//	cin >> gus;
//
//	while (gus != a)
//	{
//		if (gus > a)
//		{
//			cout << "猜大了！" << endl;
//			cout << "再输入猜测数字：" << endl;
//			cin >> gus;
//		}
//		else
//		{
//			cout << "猜小了！" << endl;
//			cout << "再输入猜测数字：" << endl;
//			cin >> gus;
//		}
//	}
//
//
//	cout << "猜对了！" << endl;
//
//
//
//
//	return 0;
//}