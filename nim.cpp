#include<string.h>
#include <iostream>
using namespace std;

void instructions()
{
	cout << " the pile contains 13 coins you may draw 1 , 2 ,or 3" << endl;
}
 
void displaystate(int& pile)
{
	cout << "there are " << pile << " int the pile" << endl;
}

void getplayermove(int& pile)
{
	cout << "draw" << endl;
	int m;
	cin >> m;
	pile -= m;

}
bool isbadposition(int coins);
int findgoodmove(int coins);

bool isbadposition(int coins)
{
	if (coins == 1)
		return true;
	return findgoodmove(coins) == -1;
}

int findgoodmove(int coins)
{
	for (int i = 1; i <= 3; i++)
	{
		if (isbadposition(coins - i))
			return i;
	}
	return -1;
}


void computermove(int& pile)
{
	if (findgoodmove(pile))
	{
		pile -= findgoodmove(pile);
	}
	else
		pile -= 1;
}
int main()
{
	int pile = 13;
	instructions();
	while (pile > 1)
	{
		displaystate(pile);
		int whoseturn;
		cout << "whose playing" << endl;
		cin >> whoseturn;
		switch (whoseturn) {
		case 1:
			getplayermove(pile);
			break;
		case 2:
			computermove(pile);
			break;
		}

	}
	
	
}
