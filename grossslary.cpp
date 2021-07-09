#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int bsalary;
        float hra,dra,gross;
        cin>>bsalary;
        if (bsalary<1500)
        {
            hra=0.1*bsalary;
            dra=0.9*bsalary;
        }
        else{
            hra=500;
            dra=0.98*bsalary;

        }
        gross= hra+bsalary+dra;
        cout<<setprecision(2)<<fixed<<gross<<endl;
    }
    
    return 0;
}