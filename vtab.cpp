#include <iostream>
#include<vector>
using namespace  std;
class basicticket {
private:
    string name;
    string dep;
    string arr;
    int flight;
    int ticket;
public:
    basicticket(string passenger,string depart,string arrive,int flightno,int pr):
        name(passenger),dep(depart), arr(arrive),flight(flightno),ticket(pr){}
    basicticket():name(0), dep(0), arr(0), flight(0), ticket(0) {}
    virtual int getprice()
    {
        return ticket;
    }
    virtual void showme()
    {
        cout << name << endl;
        cout << "departure :"<<dep << endl;
        cout << "arrival :" << arr << endl;
        cout << "flight number : " << flight << endl;
        cout << "ticket price : " << getprice() << endl;
    }
};
class PremiumTicket : public basicticket {
private:
    string seat;
public:
    PremiumTicket(string passenger, string depart, string arrive, int flightno, int pr,string s):
        basicticket(passenger,depart,arrive,flightno,pr), seat(s){}
    int getprice()
    {
        return basicticket::getprice() * 1.1;
    }
    void showme()
    {
        basicticket::showme();
        cout << "seat : " << seat << endl;
    }
};

int main()
{
    basicticket b1("marie", "utah", "salem", 457483, 100);
    PremiumTicket p1("marie", "utah", "salem", 457483, 100, "fg56");
    PremiumTicket p2("marie", "utah", "salem", 457483, 100, "gh78");
    vector<basicticket*> passengers;
    passengers.push_back(&p1);
    passengers.push_back(&b1);
    passengers.push_back(&p2);
    int total=0;
    for (auto i : passengers)
    {
        i->showme();
        total += i->getprice();
    }
    cout << total<<endl;


}
