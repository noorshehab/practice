#include <iostream>
#include <regex>
#include <exception>
using namespace  std;
class InvalidNumberExpression : public exception
{
private:
    string message = "cannot convert to hexadecimal";
public:
    string what() {
        return message;
    }
};
int main()
{
    string hex;
    cin >>hex;
    int length = hex.length();
    regex valid("[0123456789abcdef]+");
    regex nembers("[0123456789]+");
    int value=0;
    try {
        if (regex_match(hex, valid))
        {
            for (int i =length-1,j=0 ; i>=0 ; i--,j++)
            {
                if (regex_match(hex, nembers))
                {
                    value += (hex[j] - '0') * pow(16, i);
                    cout << hex[j] << " " << value << endl;
                }
                else
                {
                    value += (hex[j] - 'a' + 10) * pow(16, i);
                }
            }
        }
        else
            throw InvalidNumberExpression();
    }
    catch(InvalidNumberExpression& e)
    {
        cout << e.what()<<endl;
    }
    cout << value;

}

