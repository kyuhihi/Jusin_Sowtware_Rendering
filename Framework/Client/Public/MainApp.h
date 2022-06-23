#pragma once

//레퍼런스 카운트
//클래스와 객체의 차이. 클래스는 정의, 객체는 메모리덩어리.
#include "Base.h"
class CMainApp final : public CBase
{
private:		
	CMainApp() = default;
	//왜그럴까->필요한 초기화과정을 거치라고.
	virtual ~CMainApp() = default;
	//왜그럴까-> 나를 지운다라는 함수를만들고 진짜 내가 지워지는게 맞는지 체크하는 부분이 필요.
	
public:
	static CMainApp* Create();

};

/*
private:		//생성자 소멸자
		
public:			//Get

public:			//Set

public:			//함수

protected:		//변수

protected:		//함수

private:		//변수

private:		//함수

public:			//Create Free
*/