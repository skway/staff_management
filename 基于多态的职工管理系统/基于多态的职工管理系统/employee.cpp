#include "employee.h"

Employee::Employee(int id,string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}

//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号：" << this->m_id
		<< "\t职工姓名：" << this->m_name
		<< "\t职工岗位:" << this->getDeparterment() << endl;
}

//获取岗位名称
string Employee::getDeparterment()
{
	return string("员工");
}