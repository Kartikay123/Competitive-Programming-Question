#include<iostream>
using namespace std;
/*union is similar to the structure in storing different datatype but it print one datatype at a time   */
union money
{
    /* data */
    int rice;
    float cash;
    char car;

};

int main (){
union money kartikay;
kartikay.rice = 2;
kartikay.cash = 200000;
cout <<kartikay.rice<<endl;/* the last cout will be printed correctly*/


}