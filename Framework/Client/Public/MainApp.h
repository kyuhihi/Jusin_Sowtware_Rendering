#pragma once

//���۷��� ī��Ʈ
//Ŭ������ ��ü�� ����. Ŭ������ ����, ��ü�� �޸𸮵��.
#include "Base.h"
class CMainApp final : public CBase
{
private:		
	CMainApp() = default;
	//�ֱ׷���->�ʿ��� �ʱ�ȭ������ ��ġ���.
	virtual ~CMainApp() = default;
	//�ֱ׷���-> ���� ����ٶ�� �Լ�������� ��¥ ���� �������°� �´��� üũ�ϴ� �κ��� �ʿ�.
	
public:
	static CMainApp* Create();

};

/*
private:		//������ �Ҹ���
		
public:			//Get

public:			//Set

public:			//�Լ�

protected:		//����

protected:		//�Լ�

private:		//����

private:		//�Լ�

public:			//Create Free
*/