#include"Kartikay.h"
#include<functional>
/*function act as object functor*/
int main(){
    int arr[]= {78,98,55,23,67,2};
  //  sorting is in <alogorithm>*/
//   sort(arr,arr+5); /* sorted upto 5 element incresing order by default*/
//   sort(arr,arr+6); /* sorted upto 6 element*/
  sort(arr,arr+6, greater<int>()); /* sorted upto 6 element decresing order by <functional>*/
  for (int i = 0; i < 6; i++)
  {
      /* code */cout<<arr[i]<<endl;
  }
  return 0;
}