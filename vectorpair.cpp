#include <bits/stdc++.h>
#include<vector>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
    return p1.second >p2.second;/* doosre ka badde se chota,if< then chotte se badadda*/
}
int main(int argc, char const *argv[])
{
    vector<pair<int,int>> v{{7,4},{2,7},{5,2}};
   // sort(v.begin(),v.end(),greater<pair<int,int>>());
    sort(v.begin(),v.end(),comp);
    
    
        cout<<v[0].first<<" "<<v[0].second<<endl;
        cout<<v[1].first<<" "<<v[1].second<<endl;
        cout<<v[2].first<<" "<<v[2].second<<endl;
    
    

    return 0;
}
