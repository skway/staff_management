#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"


int main()
{
	//it is a test.

	WorkerManager wm;
	int choice = 0;
	
	Worker * worker = NULL;
	worker = new Employee(1,"����",1);
	worker->showInfo();

	while (true)
	{
		wm.showMenu();

		cout << "������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			wm.ExitSystem();
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			system("cls");
			break;
		}


	system("pause");
	return 0;
}