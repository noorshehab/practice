#include <iostream>
#include<vector>
using namespace  std;
template<typename T,typename V>
class map {
private:
	vector<pair<T, V>> m;
public:
	map(T key, V val)
	{
		m.push_back(make_pair(key, val));
	}
	void add(T key, V val)
	{
		m.push_back(make_pair(key, val));
	}
	void newVal(T key,V val)
	{
		for (int i=0;i<m.size();i++)
		{
			if (m[i].first == key)
			{
				m[i].second = val;
			}
		}
		return;
	}
	void del(T key)
	{
		for (int i=0;i<m.size();i++)
		{
			if (m[i].first == key)
				m.erase(m.begin()+i);
		}
		return;
	}
	bool check(T key)
	{
		for (auto i : m)
		{
			if (i.first == key)
				return true;
		}
		return false;
	}
	V ret(T key)
	{
		for (auto i : m)
		{
			if (i.first == key)
				return i.second;
		}

	}
	void showmap()
	{
		for (auto i : m)
		{
			cout << i.first << "\t" << i.second << endl;
		}
	}

};


int main()
{
	map<int, string> m(0, "poppy");
	m.add(1, "all");
	m.add(2, "the");
	m.add(3, "worlds");
	m.add(4,"a stage");
	m.del(0);
	
	m.newVal(3, "worlds a");m.newVal(4, "stage");
	m.showmap();
}
