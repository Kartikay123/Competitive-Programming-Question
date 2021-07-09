#include"Kartikay.h"
using namespace std;
int main(int argc, char const *argv[])
{
int n,i;
cout<<"enter the value of n"<<endl;
cin>>n;
for (int i = 1; i <=n; i++){
    for (int k = n-i; k>0; k--){
        cout<<" ";
        
    }
    for (int j = 1; j<=i; j++)
    {
        /* code */cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}




//1)// for (int i = 1; i <= n; i++)
// {
//   for (int  j = 1; j <=i; j++)
//   {
//       cout<<"* ";
//   }
//   cout<<endl;
  
// }

// ??2)for (int i=n; i>=1; i--)
// {
//   for (int j = i; j >0; j--)
//   {
//     cout<<"* ";
//   }
//   cout<<endl;
  
// }

