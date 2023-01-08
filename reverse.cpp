#include <iostream>
#include<math.h>
using namespace  std;
string reverse(string input)
{
	if (input.length()==1)
	{
		return input ;
	}
	else
	{
		string ne = input.substr(1, input.length());
		return reverse(ne)+input[0];
	}
}
int main()
{
	cout << reverse("racecar") << endl;
}
