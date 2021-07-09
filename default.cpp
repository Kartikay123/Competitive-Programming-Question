#include"Kartikay.h"
 float product(int &a, float b = 2.45){
     return a*b;
 }
 int strlen(const char p){
     /* Here const is constant argument since it is inside the function its value remain constant */
     return 0;
 }
int main(int argc, char const *argv[])
{
    int x,y;
    cin>>x>>y;
    cout<<"enter the value of x and y"<<endl;
    cout<<"their product is:"<<product(x)<<endl;    /*default*/
    cout<<"their product is:"<<product(x,y)<<endl;
    return 0;
}
/*this is default statement when nothing is given in second parrt of function and you want to */