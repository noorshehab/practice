#include<string.h>
#include <iostream>
using namespace std;

void recperm(string sofar, string rest)
{
	if (rest == "")
	{
		cout << sofar << " ";
	}
	else
	{
		for (int i = 0; i < rest.length(); i++)
		{
			string next = sofar + rest[i];
			string look =rest.substr(0,i)+rest.substr(i+1);
			recperm(next, look);

		}
	}
}

int main()
{
	string str = "abcde";
	recperm(" ", str);
	
	
}
