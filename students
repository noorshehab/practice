#include <iostream>
using namespace std;
#include<vector>
#include<iterator>
#include<algorithm>
struct student {
    string name;
    double score;
    bool operator<( student other)
    {
        if (score < other.score)
            return true;
        else
            return false;

    }
};
int main()
{
    
    istream_iterator<int> nums(cin );
    vector<student> record;
    vector<student>:: iterator x=record.begin();
    int entries = *nums;
    for (int i = 0; i < entries; i++)
    {
        student temp;
        string n;
        double s;
        cin>>n;
        temp.name = n;
        cin >> s;
        temp.score = s;
        record.push_back(temp);
        
    }
    for (int i = 0; i < entries; i++)
    {
        cout << record[i].name << " : " << record[i].score << endl;
    }

    sort(record.begin(), record.end());
    for (int i = 0; i < entries; i++)
    {
        cout << record[i].name << " : " << record[i].score << endl;
    }

}
