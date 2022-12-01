#include <iostream>
using namespace std;
#include<stack>
#include<iterator>
#include<algorithm>
int main()
{
    istream_iterator<string> in{ cin };
    string arb = *in;
    stack<char> rev;
    for (int i = 0; i < arb.size(); i++)
    {
        rev.push(arb[i]);
    }
    for (int i = 0; i < arb.size(); i++)
    {
        arb[i] = rev.top();
        rev.pop();
    }
    for (const auto& x : arb)
    {
        cout << x;
    }
}

