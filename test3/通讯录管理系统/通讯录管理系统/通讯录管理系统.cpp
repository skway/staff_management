#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//联系人的结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};
//通讯录结构体
struct Addressbooks
{
	//联系人数组
	struct Person personArray[MAX];
	//联系人个数
	int m_Size;
};

//显示菜单
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

//1.添加联系人
void addPerson(Addressbooks * abs)
{
	//判断通讯录是否满了
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加。" << endl;
		return;
	}
	else
	{
		//添加联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		cout << "请输入姓名：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex=0;
		while (true)
		{
			//输入正确，退出循环，输入错误，重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入的性别有误，请重新输入" << endl;
			}

		}	
		//年龄
		cout << "请输入年龄：" << endl;
		int age=0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入住址：" << endl;
		string  addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//更新通讯录中的人数
		abs->m_Size++;

		cout << "添加成功。" << endl;

		system("pause");
		system("cls");
	}
}

//2.显示所有联系人
void printPerson(const Addressbooks * abs)
{
	if (abs->m_Size == 0)
	{
		cout << "通讯录中没有联系人。" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1?"男":"女") << "\t";
			cout << "年龄: " << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");

}

//3.检测联系人是否存在
int detectPerson(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;		//返回这个人在通讯录中的数组编号
		}
	}
	
	return -1;
}

//3.删除指定联系人
void deletePerson(Addressbooks * abs)
{
	cout << "请输入要删除的联系人" << endl;
	string name;
	cin >> name;
	//检测联系人是否存在
	int ret = detectPerson(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功。" << endl;

	}
	else
	{
		cout << "查无此人。" << endl;
	}

	system("pause");
	system("cls");
}

//4.查找联系人
void findPerson(Addressbooks * abs)
{
	cout << "请输入要查找的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = detectPerson(abs, name);
	if (ret != -1)
	{
		int i = ret;
		cout << "姓名：" << abs->personArray[i].m_Name << "\t";
		cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄: " << abs->personArray[i].m_Age << "\t";
		cout << "电话：" << abs->personArray[i].m_Phone << "\t";
		cout << "住址：" << abs->personArray[i].m_Addr << endl;
	}
	else
	{
		cout << "查无此人。" << endl;
	}

	system("pause");
	system("cls");
}

//5.修改联系人
void editPerson(Addressbooks * abs)
{
	cout << "请输入要修改的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = detectPerson(abs, name);
	if (ret != -1)
	{
		int i = ret;
		//姓名
		cout << "请输入姓名：" << endl;
		string name;
		cin >> name;
		abs->personArray[i].m_Name = name;
		//性别
		cout << "请输入性别：" << endl;
		int sex = 0;
		while (true)
		{
			//输入正确，退出循环，输入错误，重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[i].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入的性别有误，请重新输入" << endl;
			}

		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[i].m_Age = age;
		//电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[i].m_Phone = phone;
		//住址
		cout << "请输入住址：" << endl;
		string  addr;
		cin >> addr;
		abs->personArray[i].m_Addr = addr;

		cout << "修改成功。";
	}
	else
	{
		cout << "查无此人。" << endl;
	}


	system("pause");
	system("cls");
}

//6.清空联系人
void clearPerson(Addressbooks * abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清零";

	system("pause");
	system("cls");
}

int main()
{
	//创建一个通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录当前人员个数
	abs.m_Size = 0;

	int select = 0;		//用户选择输入的变量

	while (true)
	{
		//菜单的调用
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:		//添加联系人
			addPerson(&abs);
			break;
		case 2:		//显示联系人
			printPerson(&abs);
			break;
		case 3:		//删除联系人
			deletePerson(&abs);
			break;
		case 4:		//查找联系人
			findPerson(&abs);
			break;
		case 5:		//修改联系人
			editPerson(&abs);
			break;
		case 6:		//清空联系人
			clearPerson(&abs);
			break;
		case 0:		//退出通讯录
			cout << "欢迎下次使用通讯录" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}