#include"Kartikay.h"
class distancecalculate{
    private:
    int x1,y1,x2,y2,k;
    public:
    void firstcoordinate(int a, int b){
        x1 =a;
        y1 =b;
    }
    void secondcoordinate(int a, int b){
        x2 =a;
        y2 =b;
    }
    void distance(){
        k= sqrt((x2-x1)^2+(y2-y1)^2);
        cout<<k<<endl;
    }
    /*void printcoordinate(){
        cout<<"The coordinate is ("<<x1<<","<<y1<<")"<<endl;
        cout<<"The coordinate is ("<<x2<<","<<y2<<")"<<endl;*/
    
};
    int main(int argc, char const *argv[])
    {
        distancecalculate point;
        point.firstcoordinate(7,5);
       // point.printcoordinate();
        point.secondcoordinate(8,9);
       //  point.printcoordinate();
        point.distance();
        return 0;
    }
    