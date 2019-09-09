#include <iostream>
#include "loadAdapter.h"

using namespace std;

loadLibDemo *m_loadlib;
int main()
{
	//test load demolib1
	m_loadlib = new loadLibDemo();

	cout << "\nnow to load demolibone.dll \n\n";
	m_loadlib->realLoadLib("demolibone.dll");

	string str_1 = "hello demolibone.dll";
	(m_loadlib->pOne)(str_1);

	(m_loadlib->pTwo)(2);

	(m_loadlib->pThree)("hello world ~~~");

	(m_loadlib->pFour)("!!!");

	(m_loadlib->pFive)();

	(m_loadlib->pSix)();

	delete m_loadlib;

	m_loadlib = new loadLibDemo();
	cout << "\nnow to load demolibtwo.dll \n\n";

	//test load demolib2
	m_loadlib->realLoadLib("demolibtwo.dll");

	str_1 = "hello demolibtwo.dll";
	(m_loadlib->pOne)(str_1);

	(m_loadlib->pTwo)(2);

	(m_loadlib->pThree)("HELLO WORLD ~~~");

	(m_loadlib->pFour)("~~~");

	(m_loadlib->pFive)();

	(m_loadlib->pSix)();

	delete m_loadlib;

	system("pause");

	return 0;

}