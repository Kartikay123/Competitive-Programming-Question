#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j = 1;
    cin>>i;
    do{             /* table with helpof loop*/
        cout<<i*j<<endl;
        j =++j;

    } while(j<=10);
    
    return 0;
}
