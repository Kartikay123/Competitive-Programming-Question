#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{/*pointers  stores dataype into datatype*/
    int a = 3;
    int* b = &a;
    cout<<"the address of b is "<<&a<<endl;
    cout<<"the address of b is "<<b<<endl;
    cout<<"the value of  of b is "<<*b<<endl;
    /*pointer to pointer store*/
    int** c= &b;
    cout<<"the address of c is"<<&b<<endl;
    cout<<"the address of c is"<<c<<endl;
    cout<<"the value of c is"<<**c<<endl;

    return 0;
}
