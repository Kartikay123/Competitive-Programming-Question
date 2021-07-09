#include<iostream>
using namespace std;
//int main() {

   // cout <<"hello uncle namaste chalo kaakm ki baat pe aate hai bhai log I am alone\n";
/*      int main(){} is function return value 0*/
/*      int sum(int a, int b){} is also function withh some 
formal value/parametre and return the value c, c =a+b;
function prototype is firstly the function is written before int main(){} always remember
type function-name(arguments);*/
void k();
int sum(int a, int b){
int c = a+b;
return c;  }    /*int int can also replaces the inta , intb*/
int main(int argc, char const *argv[])
{
    void k();
    cout<<"hello\n";
    int n;
    float m;
    cin>>n;
    cin>>m;
    cout<<"the value of n is"<<n<<endl;
    cout<<"the value of m is"<<m<<endl;
    cout<<"the sum is:"<<sum(n,m);

    return 0;
}/* here n, m and are called the actual parametres*/
/* whatever is going to happen inside the int main. in above example we call the functioon void*/



