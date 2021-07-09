#include<iostream>
#include<cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
   /* float r = 578.4565;
    /* in order to print the float value upto 7 place of decimal we use cout.precision(7); then cout<<fixed<<r<<endl;*/
   // cout. precision(7);
   // cout <<fixed<<r<<endl;*/
    int a;
    long l; char c;
    float  f; double d;
    cin>>a>>l>>c>>f>>d;
  //  cout<<a<<endl<<l<<endl<<c<<endl;
    cout.precision(3);
    cout<<fixed<<f<<endl;
    cout<<fixed<<a<<endl;
    cout<<fixed<<l<<endl;
    cout<<fixed<<d<<endl;
    
    cout.precision(9);
    cout<<fixed<<d;

    


    return 0;
}

