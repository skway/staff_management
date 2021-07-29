#pragma once
#include <iostream>
using namespace std;
#include <string>

//职工的抽象类
//抽象类不需要建立对应的cpp文件
class Worker
{
public:
	//Worker();
	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getDeparterment() = 0;
	//~Worker();

	//职工编号
	int m_id;
	//姓名
	string m_name;
	//部门编号
	int m_did;
};