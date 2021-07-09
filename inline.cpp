/*#include<iostream>
using namespace std;
inline int product(int &a, int &b){     /* inline function is not used with static variable and recursion*/
//     return a*b;

// }
// int main(int argc, char const *argv[])
// {
//     int x,y;
//     cin>>x>>y;
//     cout<<"printing and calling the function"<<product(x,y)<<endl;
//     cout<<"printing and calling the function"<<product(x,y)<<endl;
//     cout<<"printing and calling the function"<<product(x,y)<<endl;
//     cout<<"printing and calling the function"<<product(x,y)<<endl;
//     cout<<"printing and calling the function"<<product(x,y)<<endl;
//     cout<<"printing and calling the function"<<product(x,y)<<endl;
//     cout<<"printing and calling the function"<<product(x,y)<<endl;
//     return 0;
#include<iostream>
using namespace std;
 int product(int &a, int &b){
     static int c = 2;
     c = c+1;     /* inline function is not used with static variable and recursion*/
    return a*b+c;

}
int main(int argc, char const *argv[])
{
    int x,y;
    cin>>x>>y;
     cout<<"printing and calling the function"<<product(x,y)<<endl;
     cout<<"printing and calling the function"<<product(x,y)<<endl;
     cout<<"printing and calling the function"<<product(x,y)<<endl;
     cout<<"printing and calling the function"<<product(x,y)<<endl;





    return 0;
}