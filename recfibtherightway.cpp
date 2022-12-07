#include <iostream>
using namespace std;
void fib(long long int first,long long int second,int iter) {
	cout << first << " " ;
	if (iter == 0)
		cout << first + second;
	else
	{
		fib(second, first + second, iter - 1);
	}

}

int main()
{
	fib(1, 2, 55);
	
}
