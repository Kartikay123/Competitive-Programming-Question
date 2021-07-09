#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;  
    s2=s1;
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
     
    if(s2[0]==s1[0]){
        cout<<s1<<endl;
    }
    else{
        s1[0]=s1[0]-32;
        cout<<s1<<endl;
    }
    
    return 0;
}