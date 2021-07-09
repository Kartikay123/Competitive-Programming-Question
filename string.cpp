#include<iostream>
using namespace std;
#include<string>

int main(int argc, char const *argv[])
{
    string s,k,g;
    k = "hackerrank";
    getline(cin, s);
    g = k + "" + s;
    cout<<g<<endl;

    return 0;
}
