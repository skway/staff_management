#include "workerManager.h"

WorkerManager::WorkerManager()
{

}

void WorkerManager::showMenu()
{
	cout << "----------------------------------" << endl;
	cout << "----------欢迎使用职工管理系统----------------" << endl;
	cout << "---------------0 退出程序-----" << endl;
	cout << "---------------1 添加职工信息-----------" << endl;
	cout << "---------------2 显示职工信息------" << endl;
	cout << "---------------3 删除职工信息------" << endl;
	cout << "---------------4 修改职工信息------" << endl;
	cout << "---------------5 查找职工信息------" << endl;
	cout << "---------------6 按照编号排序------" << endl;
	cout << "---------------7 清空所有信息------" << endl;
}

void WorkerManager::ExitSystem()//退出系统
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

WorkerManager::~WorkerManager()
{

}