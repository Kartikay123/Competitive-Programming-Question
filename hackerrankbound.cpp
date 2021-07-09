#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,val,q;
    cin>>n;
    
    vector<int>v;
    
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    int k;
    cin>>q;
    while(q--){
       
        cin>>k;
        
       vector<int>::iterator l = lower_bound(v.begin(), v.end(), k);
       
       cout<< l-v.begin()<<endl;
   
    }  
       
   return 0;
}
    

