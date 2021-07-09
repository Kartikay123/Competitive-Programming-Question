#include"Kartikay.h"
template<class T>
class don{
public:
T data;
don(T a){
    data =a;    
}
//void display();/*declaraing it outside*/
};
//template<class T> /* This line is compulsory for template functio nouside declare*/
//void don<T> :: display(){
//cout<<data<<endl;
//}

void func(int a){
    cout<<"I am first func"<<endl;
}
template<class T>
void func(T a){
    cout<<"I am first func"<<endl;
}

int main(int argc, char const *argv[])
{
   // don<int> obj1(5);
    //obj1.display();
    func(9);        /*exact match will take higher proirity sinnce 9 is int not T */
    return 0;
}
