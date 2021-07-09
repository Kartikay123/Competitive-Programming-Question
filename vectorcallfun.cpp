#include <bits/stdc++.h>
using namespace std;
 void fun( const vector<int> &v){/* const means you can not modify the v further*/
     
        for(int x: v){
            cout<<x<<" ";
        }
    }
int main(){
    vector<int> v{3,5,9};
   fun(v);
    return 0;
}