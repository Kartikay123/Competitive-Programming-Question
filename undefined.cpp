#include"Kartikay.h"


int  main(int argc, char const *argv[])
{
    /* code */
    int g = 9;
    int n;
    n = ++g + g++;
    /* this is the undefined sequence point in C++u*/
    cout<<g;
    return 0;
}
