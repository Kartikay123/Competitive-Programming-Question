#include "Kartikay.h"
/*syntax of A +B ---->C is: C syntax
class derived : visibilitymode base1,visibility mode base2{}*/
class base1
{
protected:
    int var1;

public:
    ;
    void setvar1(int a)
    {
        var1 = a;
    }
};
class base2
{
protected:
    int var2;

public:
    ;
    void setvar2(int a)
    {
        var2 = a;
    }
};
class derived : public base1, public base2
{
public:
    void display()
    {
        cout << "the value of base1 is: " << var1 << endl;
        cout << "the value of base2 is: " << var2 << endl;
        cout << "the sum  is: " << (var1 + var2) << endl;
    }
};
int main(int argc, char const *argv[])
{
    derived chutiya;
    chutiya.setvar1(98);
    chutiya.setvar2(8);
    chutiya.display();

    return 0;
}
/*visibility mode is public hence 
inherit derived class willvar1 and var2 will be protected
setvar1 and setvar2 and display will be public*/