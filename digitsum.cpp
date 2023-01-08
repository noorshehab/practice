#include <iostream>
#include<math.h>
using namespace  std;
int wrapped(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return wrapped(n/10)+ n%10;
	}
}
int digitalroot(int sum)
{
	if (sum < 10)
	{
		return sum;
	}
	else
	{
		digitalroot(wrapped(sum));
	}
}


int main()
{
	cout<<wrapped(1792)<<endl;
	/*
	for (int i = 0,j = 1792; i <=4; i++)
	{
		int x = pow(10, i);
		
		cout<<(j/x)%10<<endl;
	}*/
}
