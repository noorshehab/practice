#include <iostream>
using namespace std;

bool effpal(string& str, int n)
{

	if (n+1 == str.length()-n)
	{cout << " is palindrome" << endl;
		return true;
	}
	else
	{
		if (str[n] == str[(str.length() - n) - 1])
		{
			return effpal(str, n+1);
		}
		else
		{
			cout << " not palindrome";
			return false;
		}
	}
}
int main()
{
	string str = "racecar";
	effpal(str, 0);


}
