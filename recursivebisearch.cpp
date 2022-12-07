#include <iostream>
using namespace std;
template<typename t>
int bisearch(t key, t ques[], int rangestart, int rangeend)
{
	if (ques[(rangestart + rangeend) / 2] == key)
	{
		return (rangestart + rangeend) / 2 +1;
	}
	else if (ques[(rangestart + rangeend) / 2] > key)
	{
		return bisearch(key, ques, rangestart, rangeend - 1);
	}
	else if(ques[(rangestart + rangeend) / 2] <key)
	{
		return bisearch(key, ques, (rangestart + rangeend) / 2, rangeend);
	}
}

int main()
{
	int arr[3] = { 1,2,3 };
	cout<<bisearch<int>(2, arr, 1, 3);
}
