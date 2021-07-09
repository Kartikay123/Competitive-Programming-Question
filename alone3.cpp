#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
//  bool a;
//  cin>>boolalpha>>a; /* accept true and false value*/
//  cout<<a;
//  cout<<"\"GeeksForGeeks\"";


int a=2;
int *p;
p=&a;
cout<<sizeof(int)<<endl;
cout<<*p<<" "<<p<<endl;
cout<<*(p+1)<<" "<<(p+1)<<endl;
    return 0;
}
