#include <iostream> 
#include<bits/stdc++.h> 
using namespace std;  
int main()  
{  
//   int  i, m=0, flag=0;  
//   cout << "Enter the Number to check Prime: ";  
//   cin >> i;  
//   m=i/2;  
//   for(int j = 2; j<= m; j++)  
//   {  
//       if(i % j == 0)  
//       {  
//           cout<<"Number is not Prime."<<endl;  
//           flag=1;  
//           break;  
//       }  
//   }  
//   if (flag==0)  
//       cout << "Number is Prime."<<endl; 
int value;
cin>>value; 
if(value<2)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<=sqrt(value);i++)
        {
            if(value%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
  return 0;  
}  