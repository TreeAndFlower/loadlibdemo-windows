#include "loadAdapter.h"

#include <stdio.h>

loadLibDemo::loadLibDemo():pOne(NULL),pTwo(NULL),pThree(NULL),pFour(NULL),pFive(NULL),pSix(NULL),libHandle(NULL)
{
}

loadLibDemo::~loadLibDemo()
{
	if(libHandle)
	{
		FreeLibrary(libHandle);
		pOne = NULL;
		pTwo = NULL;
		pThree = NULL;
		pFour = NULL;
		pFive = NULL;
		pSix = NULL;	
	}
}

void loadLibDemo:: display()
{
	printf("pOne is %x\n",(unsigned long)pOne);
	printf("pTwo is %x\n",(unsigned long)pTwo);
	printf("pThree is %x\n",(unsigned long)pThree);
	printf("pFour is %x\n",(unsigned long)pFour);
	printf("pFive is %x\n",(unsigned long)pFive);
	printf("pSix is %x\n",(unsigned long)pSix);
}

short loadLibDemo::realLoadLib(const string& libPath)
{
	if(libPath.length() <= 0)
		return -1;

	libHandle = LoadLibrary(libPath.c_str());
	if(NULL==libHandle)
	{
		printf("dlopen fail %s\n", GetLastError());
		return -1;
	}

	pOne = (PFUN_APIOne)GetProcAddress(libHandle, "one_fun_api");
	if(NULL == pOne)
	{
		printf("[PFUN_APIOne] dlsym fail %s\n", GetLastError());
		return -1;
	}

	pTwo = (PFUN_APITwo)GetProcAddress(libHandle, "two_fun_api");
	if(NULL == pTwo)
	{
		printf("[PFUN_APITwo] dlsym fail %s\n", GetLastError());
		return -1;
	}

	pThree = (PFUN_APIThree)GetProcAddress(libHandle, "three_fun_api");
	if(NULL == pThree)
	{
		printf("[PFUN_APIThree] dlsym fail %s\n", GetLastError());
		return -1;
	}

	pFour = (PFUN_APIFour)GetProcAddress(libHandle, "four_fun_api");
	if(NULL == pFour)
	{
		printf("[PFUN_APIFour] dlsym fail %s\n", GetLastError());
		return -1;
	}

	pFive = (PFUN_APIFive)GetProcAddress(libHandle, "five_fun_api");
	if(NULL == pFive)
	{
		printf("[PFUN_APIFive] dlsym fail %s\n", GetLastError());
		return -1;
	}

	pSix = (PFUN_APISix)GetProcAddress(libHandle, "six_fun_api");
	if(NULL == pSix)
	{
		printf("[PFUN_APISix] dlsym fail %s\n", GetLastError());
		return -1;
	}

	return 0;
}
