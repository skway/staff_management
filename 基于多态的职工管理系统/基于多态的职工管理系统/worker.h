#pragma once
#include <iostream>
using namespace std;
#include <string>

//ְ���ĳ�����
//�����಻��Ҫ������Ӧ��cpp�ļ�
class Worker
{
public:
	//Worker();
	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ����
	virtual string getDeparterment() = 0;
	//~Worker();

	//ְ�����
	int m_id;
	//����
	string m_name;
	//���ű��
	int m_did;
};