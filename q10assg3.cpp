#include<string.h>
#include <iostream>
using namespace std;
#include <exception>

class montherror : public exception {
public:
	montherror():message("month not in year" ){}
	string what() {
		return message;
	}
private:
	string message;
};
class dayerror : public exception {
public:
	dayerror():message("day not in year"){}
	string what() {
		return message ;
	}
private:
	string message;
};
struct month {
	string name;
	int days;
};

int main()
{
	month year[12] = {
		{"january",31},{"february",29},{"march",31},{"april",30},{"may",31},{"june",30},{"july",31},{"august",30},{"september",31},{"october",30},{"november",31},{"december",31}
	};
	int mymonth;
	int myday;
	
	cout << "enter month";
	
	
	while(cin>>mymonth)
	{
		if (mymonth!=0)
		{   
			try {
				try 
				{
					if (mymonth <= 12)
					{
						cout << "enter day";
						cin >> myday;

						if (myday > year[mymonth - 1].days)
						{
							throw dayerror();
							break;

						}
						else
						{
							cout << year[mymonth - 1].name << " " << myday << endl;
						}
					}
					else
					{
						throw montherror();
						break;
					}
				}
				catch(dayerror& de){
					cout << "exception occured" << endl;
					cout << de.what() << endl;
				
				}
				
				

			}
			catch(montherror& me) {
				cout << "exception occured" << endl;
				cout << me.what() << endl;

			}
			cout << "enter month";
			
			
		}
		else
		{
			break;
		}
	}
	
	
	
}
