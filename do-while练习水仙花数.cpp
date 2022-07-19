//#include <iostream>
//#include <math.h>
//using namespace std;
//int main()
//{
//	/*水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
//	例如：1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
//	请利用do…while语句，求出所有3位数中的水仙花数*/
//
//	//三位数：100-999，个位十位百位摘出来依次取3次方相加
//	int num = 100;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//总和
//	int sum = 0;
//
//	//计数
//	int total = 0;
//
//	do
//	{
//		//百位
//		a = num / 100;
//		//十位
//		b = (num % 100) / 10;
//		//个位
//		c = num % 10;
//		sum = a * a * a + b * b * b + c * c * c;
//		if (num == sum)
//		{
//			total++;
//			cout << "第" << total << "个水仙花数为：" << num << endl;
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