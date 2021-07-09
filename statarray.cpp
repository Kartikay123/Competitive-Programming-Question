#include "Kartikay.h"
class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the Id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "Entered  Id is " << endl;
        cout << id << endl;
        cout << "The value of count can be increment with static variable " << count << endl;
    }
    
};

int main(int argc, char const *argv[])
{
    employee kartikay[4];
    for (int  i = 0; i < 4; i++)
    {
    kartikay[i].setdata();
    kartikay[i].getdata();
   
    }
    
    return 0;
}