#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int area,peri;
    area=a*b;
    peri=2*(a+b);
    if (area>peri)
    {
        /* code */
        cout<<"Area"<<endl;
        cout<<area<<endl;
    }
    else if (peri>area)
    {
        cout<<"Peri"<<endl;
        cout<<peri<<endl;
    }
    else{
        cout<<"Eq"<<endl;
        cout<<area<<endl;
    }
    return 0;
}
    