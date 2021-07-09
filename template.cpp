#include"Kartikay.h"
///*template are used in classes to DRY not repeating anything like same int and float */
/* example aache se samaj be*/
template<class T>   /*here T can be anything int float double and we get the desired resulat*/
class vector{

public:
T *arr;
/*int size; */  int size;
vector(int m){
    size= m;
    arr=new T (size);
}
T productv1v2(vector &v){
    T d=0;
    for (int i = 0; i < size; i++)
    {
        /* code */d+= this->arr[i]*v.arr[i];
    }
    return d;
}
};
int main(){
    vector <int> v1(4);
    v1.arr[0]=20;
    v1.arr[1]=27;
    v1.arr[2]=24;
    v1.arr[3]=21;
    vector <int> v2(4);
    v2.arr[0]=0;
    v2.arr[1]=7;
    v2.arr[2]=4;
    v2.arr[3]=1;
    int a= v1.productv1v2(v2);
    cout<<a<<endl;


    vector <float> v3(4);
    v3.arr[0]=2.0;
    v3.arr[1]=2.7;
    v3.arr[2]=2.4;
    v3.arr[3]=2.1;
    vector <float> v4(4);
    v4.arr[0]=1.5;
    v4.arr[1]=7.9;
    v4.arr[2]=4.2;
    v4.arr[3]=1.4;
    float x= v3.productv1v2(v4);
    cout<<x<<endl;
    return 0;
}