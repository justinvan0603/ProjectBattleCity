#include <string.h>
#include <iostream>
using namespace std;

class DefaultMethod
{
public:
	static char* JoinCharWithInteger(char* a, int b)
	{
		char buffer[33];
		char* temp = _itoa(b, buffer, 10);
		char* result = new char[strlen(a) + strlen(temp) + 1];
		strcpy(result, a);
		strcat(result, temp);
		return result;
	}
};