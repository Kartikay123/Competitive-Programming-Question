#include<iostream>
using namespace std;

/*int main(int argc, char const *argv[])
{
    char abc = 'd';
    cout <<abc;
    return 0;
}*/
#include <iostream> 
using namespace std; 
  
// function to print numbers from 1 to 10 
int main(int argc, char const *argv[])
{
    /* code */  int n = 1; 
label: 
    cout << n << " "; 
    n++; 
    if (n <= 10) 
        goto label; 

    return 0;
}
 
 
  /*  int n = 1; 
label: 
    cout << n << " "; 
    n++; 
    if (n <= 10) 
        goto label; */
