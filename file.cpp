#include"Kartikay.h"
#include<fstream>
/* file is of two type input and output file-
some classes are used like <fstream>
1) fstreambase
2) ifstream->derived from fstreambase
3)ofstream-> derived from fstreambase*/
int main(int argc, char const *argv[])
{
    string str = "Kartikay ki file";
    string str2;
   
  //   ofstream out("samplefile.cpp");/*in order to write and read the functioon*/
  //   out<<str<<endl;     //* out is like cout
  //   out<<"yah likh wah print hoga"<<endl;
  //   out.close();    
  // //  out.close();


    ifstream in;/*waha liki cheez yaha print karwana*/
    in.open("samplefile.cpp");
    in>>str2;   /* in is like cin*/
    while (in.eof()==0)   /* this is endof fnction*/
    {
      /* code */getline(in,str2);
      cout<<str2<<endl;
    }
    
    
    
    in.close();/*link between both file break*/


    return 0;
}
