#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

//��ϵ�˵Ľṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};
//ͨѶ¼�ṹ��
struct Addressbooks
{
	//��ϵ������
	struct Person personArray[MAX];
	//��ϵ�˸���
	int m_Size;
};

//��ʾ�˵�
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}

//1.�����ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӡ�" << endl;
		return;
	}
	else
	{
		//�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "������������" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
		int sex=0;
		while (true)
		{
			//������ȷ���˳�ѭ�������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "������Ա���������������" << endl;
			}

		}	
		//����
		cout << "���������䣺" << endl;
		int age=0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "������סַ��" << endl;
		string  addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//����ͨѶ¼�е�����
		abs->m_Size++;

		cout << "��ӳɹ���" << endl;

		system("pause");
		system("cls");
	}
}

//2.��ʾ������ϵ��
void printPerson(const Addressbooks * abs)
{
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼��û����ϵ�ˡ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1?"��":"Ů") << "\t";
			cout << "����: " << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");

}

//3.�����ϵ���Ƿ����
int detectPerson(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;		//�����������ͨѶ¼�е�������
		}
	}
	
	return -1;
}

//3.ɾ��ָ����ϵ��
void deletePerson(Addressbooks * abs)
{
	cout << "������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	//�����ϵ���Ƿ����
	int ret = detectPerson(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;

	}
	else
	{
		cout << "���޴��ˡ�" << endl;
	}

	system("pause");
	system("cls");
}

//4.������ϵ��
void findPerson(Addressbooks * abs)
{
	cout << "������Ҫ���ҵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = detectPerson(abs, name);
	if (ret != -1)
	{
		int i = ret;
		cout << "������" << abs->personArray[i].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "����: " << abs->personArray[i].m_Age << "\t";
		cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[i].m_Addr << endl;
	}
	else
	{
		cout << "���޴��ˡ�" << endl;
	}

	system("pause");
	system("cls");
}

//5.�޸���ϵ��
void editPerson(Addressbooks * abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = detectPerson(abs, name);
	if (ret != -1)
	{
		int i = ret;
		//����
		cout << "������������" << endl;
		string name;
		cin >> name;
		abs->personArray[i].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		int sex = 0;
		while (true)
		{
			//������ȷ���˳�ѭ�������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[i].m_Sex = sex;
				break;
			}
			else
			{
				cout << "������Ա���������������" << endl;
			}

		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[i].m_Age = age;
		//�绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[i].m_Phone = phone;
		//סַ
		cout << "������סַ��" << endl;
		string  addr;
		cin >> addr;
		abs->personArray[i].m_Addr = addr;

		cout << "�޸ĳɹ���";
	}
	else
	{
		cout << "���޴��ˡ�" << endl;
	}


	system("pause");
	system("cls");
}

//6.�����ϵ��
void clearPerson(Addressbooks * abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼������";

	system("pause");
	system("cls");
}

int main()
{
	//����һ��ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼��ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;		//�û�ѡ������ı���

	while (true)
	{
		//�˵��ĵ���
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:		//�����ϵ��
			addPerson(&abs);
			break;
		case 2:		//��ʾ��ϵ��
			printPerson(&abs);
			break;
		case 3:		//ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:		//������ϵ��
			findPerson(&abs);
			break;
		case 5:		//�޸���ϵ��
			editPerson(&abs);
			break;
		case 6:		//�����ϵ��
			clearPerson(&abs);
			break;
		case 0:		//�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��ͨѶ¼" << endl;
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