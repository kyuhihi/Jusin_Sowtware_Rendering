#pragma once
class CBase abstract
{
protected:
	CBase();
	virtual ~CBase() = default;
public:
	unsigned long AddRef();
	unsigned long Release();

protected:
	unsigned long		m_dwRefCnt = 0;
public:
};

