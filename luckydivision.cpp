#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,found;
    cin>>n;
    int a[14]={4,7,47,74,44,77,444,447,474,744,774,777,477,747};
    for(int i=0;i<13;i++){
        found=0;
        if(n%a[i]==0){
            found=1;
        }
        if(found==1){
            break;
        }
    }
    if(found==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}
