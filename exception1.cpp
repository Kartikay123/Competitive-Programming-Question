#include"Kartikay.h"
/* try,throw and catch are used 
inside try expected code which produce exception is written
throw the error and this i catch by catch(cons dataype of throw)/*/
int main(int argc, char const *argv[])
{
    int a=9,b=0;
    int c;
    try
    {
        if(b==0){
            throw "exception error in string";
        }
        /* code */c = a/b;
        cout<<c;
    }
    catch(const char *s)
    {
        cout<<"2 ho gaya"<<endl<<s;
    }
    
    
    
    return 0;
}
