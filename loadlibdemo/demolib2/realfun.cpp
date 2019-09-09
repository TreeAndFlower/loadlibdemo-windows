#include "realfun.h"

#include <stdlib.h>
#include <stdio.h>
using namespace std;

short one_fun_api(const string& tmpstr)
{
	cout << "#######one#######\n";
	cout << tmpstr <<endl;
	cout << "#######one#######\n";
	cout << endl;

	return 0;
}

short two_fun_api(const int& tmpint)
{
	cout << "#######two#######\n";
	cout << tmpint <<endl;
	cout << "#######two#######\n";
	cout << endl;

	return 0;
}

short three_fun_api(const string& tmpstr)
{
	cout << "#######three#######\n";
	cout << tmpstr <<endl;
	cout << "#######three#######\n";
	cout << endl;

	return 0;
}

short four_fun_api(const string& tmpstr)
{
	cout << "#######four#######\n";
	cout << tmpstr <<endl;
	cout << "#######four#######\n";
	cout << endl;

	return 0;
}

bool  five_fun_api()
{
	cout << "#######five#######\n";
	cout << "five_fun_api \n";
	cout << "#######five#######\n";
	cout << endl;

	return true;
}

bool  six_fun_api()
{
	cout << "#######six#######\n";
	cout << "six_fun_api\n";
	cout << "#######six#######\n";
	cout << endl;

	return true;
}
