#include"Kartikay.h"
class naaamZ{
    int a,b;
    public:
    naaamZ(int x, int y){
        a=x;
        b =y;
    }
    void displayno(){
        cout<<"The number you entered is:"<<a<<" + "<<b<<endl;
    }
    naaamZ(int x){
        a =x;
        b =0;
    }
    naaamZ(){
        a =0;
        b =0;
    }
};
int main(int argc, char const *argv[])
{
    /* code */naaamZ c1(4,8);
    c1.displayno();
    naaamZ c2(2);
    c2.displayno();     /*this is construction overloading*/
    naaamZ c3;
    c3.displayno();
    return 0;
}
