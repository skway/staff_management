#include "workerManager.h"

WorkerManager::WorkerManager()
{

}

void WorkerManager::showMenu()
{
	cout << "----------------------------------" << endl;
	cout << "----------��ӭʹ��ְ������ϵͳ----------------" << endl;
	cout << "---------------0 �˳�����-----" << endl;
	cout << "---------------1 ���ְ����Ϣ-----------" << endl;
	cout << "---------------2 ��ʾְ����Ϣ------" << endl;
	cout << "---------------3 ɾ��ְ����Ϣ------" << endl;
	cout << "---------------4 �޸�ְ����Ϣ------" << endl;
	cout << "---------------5 ����ְ����Ϣ------" << endl;
	cout << "---------------6 ���ձ������------" << endl;
	cout << "---------------7 ���������Ϣ------" << endl;
}

void WorkerManager::ExitSystem()//�˳�ϵͳ
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

WorkerManager::~WorkerManager()
{

}