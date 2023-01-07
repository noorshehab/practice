#include <iostream>
#include<vector>
using namespace  std;
template<typename T>
class priorityq {
private:
	int top=999;
	int where;
	vector<T> arr;
public:
	priorityq(T item,int priority):top(priority) ,where(0)
	{
		arr.push_back(item);
	}
	void add(T item, int priority)
	{
		if (priority < top)
		{
			top = priority;
			
		}
		arr.push_back(item);
		where = arr.size()-1;
	}
	T remove()
	{
		int val = arr[where];
		arr.erase(arr.begin()+where);
		return val;
	}
};

int main()
{
	priorityq<int> n(1, 6);
	n.add(3, 10);
	n.add(4, 3);
	cout << n.remove();
}
