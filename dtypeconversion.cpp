/*
-----------------------------cpp Type Conversion----------------------------------------------
    -type conversion means convert data of one type to another type
    -Two type Conversion:
        1}Implicit Conversion:
            -data tpe conversion that is done automatically done by the compiler is called implicit type conversion.
              Higher datatpe
                 long double
                 double
                 float                 
                 long
                 int
                 short
                 char
              lower data type
              data loss-from higher to lower data type
        2}Explicit Conversion:
            -when user manually change data from one type to another this known as explicit type conversion.
            -Syntax explicit conversion:
                1] c style casting:
                    (data-type) expression;
                2] function notation:
                    datatype (expression);
*/
#include <iostream>>
using namespace std;
int main()
{
    cout<<"Implicit conversion:"<<endl;
    int a=5;
    double b=45.99,temp;
    cout<<"before conversion the value of int a "<<a<<" is and double b is "<<b<<endl;
    temp=b;
    b=a;
    a=temp;
    cout<<"after conversion the value of int a "<<a<<" is and double b is "<<b<<endl<<endl;
    cout<<"Explicit conversion:"<<endl;
    int c=67;
    double d=78.0864;
    cout<<"before conversion the value of int c "<<c<<" after conversion in duble the value of c is "<<double(c)<<endl;
    cout<<"before conversion the value of double d "<<d<<" after conversion in duble the value in int is "<<int(d)<<endl;


}

/*
-----------------------------------------------------------------------------------------
output:
        Implicit conversion:
        before conversion the value of int a 5 is and double b is 45.99
        after conversion the value of int a 45 is and double b is 5

        Explicit conversion:
        before conversion the value of int c 67 after conversion in duble the value of c is 67
        before conversion the value of double d 78.0864 after conversion in duble the value in int is 78    
-----------------------------------------------------------------------------------------    
*/
