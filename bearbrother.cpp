#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,year=0;
    cin>>a>>b;
    while (b>=a)
    {
        a=3*a;
        b=2*b;
        year++;
    }
    cout<<year<<endl;
    
    return 0;
}