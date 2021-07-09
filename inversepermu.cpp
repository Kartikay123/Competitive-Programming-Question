#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
      int arr[] = {2, 3, 1, 5, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
   int arr2[size];
 
  // Inserting position at their
  // respective element in second array
  for (int i = 0; i < size; i++){
    arr2[arr[i] - 1] = i + 1;
  }
 
  for (int i = 0; i < size; i++){
    cout << arr2[i] << " "; 
}
  
    return 0;
}
