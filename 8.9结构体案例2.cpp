#include <iostream>
#include <string>
using namespace std;

//-���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�
//- ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
// 
//- ����Ӣ����Ϣ���£�
//``
//{"�����", 23, "Ů"},
//{ "������",24,"Ů" },
//{ "����",22,"Ů" },
//{ "С��",21,"Ů" },
//{ "����",19,"Ů" },


//Ӣ�۽ṹ��
struct my_Hero
{
	//����
	string name;

	//����
	int age;

	//�Ա�
	string gender;

};

//��ֵ
void wriHero(struct my_Hero hero[], int len)
{
	string name[] = { "�����","������","����","С��","����" };
	int age[] = { 23,24,22,21,19 };
	string gender[] = { "Ů","Ů","Ů","Ů","Ů" };
	for (int i = 0; i < len; i++)
	{

		hero[i].name = name[i];
		hero[i].age = age[i];
		hero[i].gender = gender[i];
	}

}

//��������ð������
void ageBubble(struct my_Hero hero[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			//�����ͽ���˳��
			if (hero[j].age > hero[j + 1].age)
			{
				struct my_Hero test = hero[j];
				hero[j] = hero[j + 1];
				hero[j + 1] = test;
			}
		}
	}
}


//���
void priHero(struct my_Hero hero[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��" << i + 1 << "��Ӣ����:" << hero[i].name << "   ����:" << hero[i].age << "   �Ա�" << hero[i].gender << endl;
	}

}



int main()
{
	struct my_Hero hero[5];

	//�������鳤��
	int len = sizeof(hero) / sizeof(hero[0]);

	//��ֵ
	wriHero(hero, len);

	//����
	ageBubble(hero, len);

	//���
	priHero(hero, len);


	return 0;

}