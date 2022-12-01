#include <iostream>
using namespace std;
#include<map>
#include<iterator>
#include<algorithm>
int main()
{
    map<int, int>hist;
    istream_iterator<double>in{ cin };
    int val = *in;
    in++;
    hist.insert(make_pair(val, 1));
    while (val != -1)
    {
        val = *in;
        if (val == -1)
            break;
        else
        {
            if (hist.find(val) != hist.end())
            {
                hist[val]++;
            }
            else
            {
                hist.insert(make_pair(val, 1));
            }
            in++;
        }
    }
    for (const auto &p:hist )
    {
        cout << p.first << " " << p.second << endl;
    }
    

}

