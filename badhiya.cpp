#include"Kartikay.h"
 int main(){
//     static int a[5]={0,1,2,3,};
//     int *p[5]={a,a+1,a+2,a+3,a+4};
//   cout<<p<<endl;
//   cout<<*p<<endl;
int n[3][3] = {{21,41,31},{61,81,51},{13,15,11}};
//   cout<<*(*p)<<endl;
int i , *ptr;
ptr =&n[0][0];
for (int i = 0; i <=8; i++)
{
    /* code */cout<<*(ptr+i)<<endl;
}
int j =4;
cout<<*(ptr+j)<<endl;   /* This shows the Jumping of pointer through array-*/
    return 0;

}