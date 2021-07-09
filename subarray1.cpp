#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n=4;
//     int arr[n]={-1,4,7,2};
//     int Maxsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum=0;
//             for (int k = i; k <=j; k++)
//             {
//                //1 cout<<arr[k]<<" ";
//                sum=sum+arr[k];
//             }
//             Maxsum= max(Maxsum,sum);
//            //1 cout<<endl;
//         }
        
//     }
//     cout<<Maxsum;
//     return 0;
// }
int main(int argc, char const *argv[])
{
   /*/ cumulative sum approach*/
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       /* code */cin>>arr[i];
   }
   int maxsum=0;
   int currentsum=0;
   for (int i = 0; i < n; i++)
   {
       /* code */currentsum=currentsum+arr[i];
       if (currentsum<0)
       {
           currentsum=0;
       }
       maxsum= max(maxsum,currentsum);
   }
   cout<<maxsum;
    return 0;
}
