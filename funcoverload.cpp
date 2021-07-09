#include"Kartikay.h"
int funcoverload(int a,int b, float c){
        return a+b+c;;

    }
    int func(int a, int c){
        return a+c;
    }
int main(int argc, char const *argv[])
{
    /* code */int a, b,c,d;
    cin>>a>>d>>c>>b;
    cout <<"enter the value "<<func(c,d)<<endl;
    cout <<"enter the value "<<funcoverload(a,b,c)<<endl;
    
    return 0;
}
