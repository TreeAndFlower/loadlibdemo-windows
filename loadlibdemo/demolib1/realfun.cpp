#include "realfun.h"

#include <stdlib.h>
#include <stdio.h>
using namespace std;

short one_fun_api(const string& tmpstr)
{
	cout << "------one-------\n";
	cout << tmpstr <<endl;

	return 0;
}

short two_fun_api(const int& tmpint)
{
	cout << "------two-------\n";
	cout << tmpint <<endl;

	return 0;
}

short three_fun_api(const string& tmpstr)
{
	cout << "------three-------\n";
	cout << tmpstr <<endl;

	return 0;
}

short four_fun_api(const string& tmpstr)
{
	cout << "------four-------\n";
	cout << tmpstr <<endl;

	return 0;
}

bool  five_fun_api()
{
	cout << "------five-------\n";

	return true;
}

bool  six_fun_api()
{
	cout << "------six-------\n";

	return true;
}
