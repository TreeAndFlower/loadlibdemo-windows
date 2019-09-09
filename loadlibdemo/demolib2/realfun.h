#include <string>
#include <iostream>

using namespace std;

#ifdef DLLLIB 
#define DLLLIB _declspec(dllexport)
#else
#define DLLLIB _declspec(dllimport)
#endif

extern "C"{
	DLLLIB short one_fun_api(const string&);

	DLLLIB short two_fun_api(const int&);

	DLLLIB short three_fun_api(const string&);

	DLLLIB short four_fun_api(const string&);

	DLLLIB bool  five_fun_api();

	DLLLIB bool  six_fun_api();
}
