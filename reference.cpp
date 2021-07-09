#include"Kartikay.h"
int b = 34;
int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 4;
    cout<<a+b<<endl;
    cout <<"for the value of global variable "<<a+::b<<endl;
    float f = .34f;
    long double k = .34l;
    //*reference variable*/

    float x = 45.5;
    float &y = x;
    cout<<y;

    return 0;
}
