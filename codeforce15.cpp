#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count =0;
    cin>>s;
    for (int i = 0; i <s.length(); i++)
    {
        for (int j = i+1; i < s.length(); j++)
        {
            if(s[i]!=s[j]){
                count++;
            }
        }
        
        
    }
    if(count%2==0){
            cout<<"CHAT WITH HER!"<<endl;
        }
        else{
            cout<<"IGNORE HIM!"<<endl;
        }
    
    return 0;
}