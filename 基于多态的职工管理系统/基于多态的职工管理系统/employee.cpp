#include "employee.h"

Employee::Employee(int id,string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}

//��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\tְ����λ:" << this->getDeparterment() << endl;
}

//��ȡ��λ����
string Employee::getDeparterment()
{
	return string("Ա��");
}