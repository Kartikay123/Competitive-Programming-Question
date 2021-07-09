// #include <iostream>
// using namespace std;

// int main(){

//     int n,tm,digit;
//     tm = 0;
//     digit = 0;
//     cout << "enter number"<< endl;
//     cin>>n;
//     while (n>0)
//     {
//         digit = n%10;
//         tm=tm + digit ;
//         n=n/10;
//     }
//     cout <<"sum = "<<tm;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
if(n%2 == 0 && n!= 2){
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
    return 0;
}