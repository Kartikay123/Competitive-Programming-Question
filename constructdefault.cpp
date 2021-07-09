#include"Kartikay.h"
class defaultcons{
    private:
    int a,b;
    public:
    defaultcons(int x, int y=9){
        a =x;
        b =y;
    }
    void printdata();
};
   void defaultcons :: printdata(){
       cout<<"The value you entered is:"<<a<<" and "<<b<<endl;
   }
   int main(int argc, char const *argv[])
   {
       defaultcons kartik1(4,5);
       kartik1.printdata();
       defaultcons kartik2(7);
       kartik2.printdata();
       return 0;
   }
   