#pragma once
#include <iostream>
using namespace std;
#include "worker.h";

class Employee :public Worker
{
public:

	Employee(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeparterment();
};

