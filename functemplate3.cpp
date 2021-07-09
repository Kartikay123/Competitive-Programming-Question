#include"Kartikay.h"
/*template in function is same as in class/but all T1 T2 T3 and so on will be of same dattype*/
template <class T>
void swapp(T &x, T&y){
 T   temp=x;
 x=y;
 y= temp;
}

int main(int argc, char const *argv[])
{
    float a=5;
    float b=9.8;
    swapp(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
