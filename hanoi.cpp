#include <iostream>
using namespace std;
void movedisk(string start,string destination)
{
	cout << start << " to " << destination << endl;
	
}
void towersof(int n, string start, string aux, string destination)
{
	if (n == 1)
	{
		movedisk(start, destination);
	}
	else
	{
		towersof(n - 1, start, destination, aux);
		movedisk(start, destination);
		towersof(n-1,aux,start,destination);
	}
}
int main()
{
	towersof(3, "A", "B", "C");


}
