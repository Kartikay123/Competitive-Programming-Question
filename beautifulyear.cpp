#include <bits/stdc++.h>
using namespace std;

   
 
int main(){
    int y;
    cin >> y;
    string x;
    do{y++;x= to_string(y);}
    while(x[0]==x[1]||x[0]==x[2]||x[0]==x[3]||x[1]==x[2]||x[1]==x[3]||x[2]==x[3]);
    cout << y;
    return 0;
}
    