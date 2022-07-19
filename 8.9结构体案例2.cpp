#include <iostream>
#include <string>
using namespace std;

//-设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。
//- 通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
// 
//- 五名英雄信息如下：
//``
//{"孙二娘", 23, "女"},
//{ "孙尚香",24,"女" },
//{ "大乔",22,"女" },
//{ "小乔",21,"女" },
//{ "貂蝉",19,"女" },


//英雄结构体
struct my_Hero
{
	//姓名
	string name;

	//年龄
	int age;

	//性别
	string gender;

};

//赋值
void wriHero(struct my_Hero hero[], int len)
{
	string name[] = { "孙二娘","孙尚香","大乔","小乔","貂蝉" };
	int age[] = { 23,24,22,21,19 };
	string gender[] = { "女","女","女","女","女" };
	for (int i = 0; i < len; i++)
	{

		hero[i].name = name[i];
		hero[i].age = age[i];
		hero[i].gender = gender[i];
	}

}

//根据年龄冒泡排序
void ageBubble(struct my_Hero hero[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//如果大就交换顺序
			if (hero[j].age > hero[j + 1].age)
			{
				struct my_Hero test = hero[j];
				hero[j] = hero[j + 1];
				hero[j + 1] = test;
			}
		}
	}
}


//输出
void priHero(struct my_Hero hero[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "第" << i + 1 << "个英雄是:" << hero[i].name << "   年龄:" << hero[i].age << "   性别" << hero[i].gender << endl;
	}

}



int main()
{
	struct my_Hero hero[5];

	//计算数组长度
	int len = sizeof(hero) / sizeof(hero[0]);

	//赋值
	wriHero(hero, len);

	//排序
	ageBubble(hero, len);

	//输出
	priHero(hero, len);


	return 0;

}