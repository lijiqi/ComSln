/**
*  @file CompTestClass.h
*  @author LiWang112358
*  @date 2012/3/17
*  @version 1.0
*  @brief CompTestClass对象的声明，这个类要实现ICompTest接口
*/
#ifndef COMPTESTCLASS_H
#define COMPTESTCLASS_H


#include "ICompTest.h"

// {9CA9DBE8-C0B1-42c9-B6C7-856BE5756855}
static const GUID CLSID_CompTestClass = 
{ 0x9ca9dbe8, 0xc0b1, 0x42c9, { 0xb6, 0xc7, 0x85, 0x6b, 0xe5, 0x75, 0x68, 0x55 } };

class CompTestClass :
	public ICompTest
{
public:

	CompTestClass();
	~CompTestClass();

	//要实现IUnknown接口
	virtual HRESULT _stdcall QueryInterface(const IID& riid, void** ppvObject);
	virtual ULONG _stdcall AddRef();
	virtual ULONG _stdcall Release();

	//要实现ICompTest接口
	virtual int _stdcall HelloWorld();
	
public:
	static int Init();
	ULONG ObjNum();
public:
	ULONG static m_objNum;
	CRITICAL_SECTION static m_cs;
protected:

	ULONG m_Ref;
};
#endif