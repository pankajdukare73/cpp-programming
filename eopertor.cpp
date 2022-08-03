/*
-----------------------------cpp Opertors----------------------------------------------
    -opertor are symbol that perform opertion on variable and values.
    -there are six type of opertor:
        1.Arithmatic Opertor:
         -this opertor are use to perform arithmatic opertion.
            ------------------------------------------
                symbol          meaning
            ------------------------------------------
                +               Addition
                -               Subtraction
                *               multipliction
                /               Division
                %               modulus(reminder)
                ++              increment
                --              decrement
            -------------------------------------------
        2.Assignment opertor:
         -this opertor are used to assign value to variable
            ------------------------------------------
                symbol          meaning
            ------------------------------------------
                =               a=b
                +=              a+=b ->a=a+b
                -=              a-=b ->a=a-b
                /=              a/=b ->a=a/b
                %=              a%=b ->a=a%b
            -----------------------------------------
        3.Relational Opertor:
         -this opertor are used to check the relationship between two operand
            ------------------------------------------
                symbol          meaning
            ------------------------------------------
                ==              Equal to
                !=              Not equal to
                >               Greater than
                <               less than
                >=              Greater than equal to
                <=              Less than equal to
            ------------------------------------------
        4.logical Opertor:
         -this opertor are used to perform  logical opertion
            ------------------------------------------
                symbol          meaning
            ------------------------------------------
                &&              AND
                ||              OR
                !               Not
            ------------------------------------------
        5.Bitwize Opertor:
         -it work with indyvisual bit (binary opertions) 
            ------------------------------------------
                symbol          meaning         opertion
            ------------------------------------------
                &               and             1&1->1 otherwize 0
                |               or              0|0->0 otherwize 1
                ^               xor             1^1 and 0^0 ->0 otherwize 1
                ~               not             0->1 and 1->0
                <<              left shift      
                >>              right shift
            ------------------------------------------
        6.Other opertor:
            ------------------------------------------
                symbol                    meaning
            ------------------------------------------
                sizeof(a)                   fined size of variable
                condition?true:false        check condition and print specific statement
                &a                          represent memory address
            ------------------------------------------

*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"Arithmatic opertor:"<<endl<<"a=10 and b=5"<<endl;
    int a=10,b=5;
    cout<<"a+b:"<<a+b<<endl;
    cout<<"a-b:"<<a-b<<endl;
    cout<<"a*b:"<<a*b<<endl;
    cout<<"a/b:"<<a/b<<endl;
    cout<<"a++:"<<a++<<endl;
    cout<<"++b:"<<++b<<endl<<endl;

    cout<<"Assignment opertor:"<<endl<<"c=20 and d=10"<<endl;
    int c=20,d=10;
    c+=d;
    cout<<"c+=d:"<<c<<endl;
    c=20;
    c-=d;
    cout<<"c-=d:"<<c<<endl;
    c=20;
    c*=d;
    cout<<"c*=d:"<<c<<endl;
    c=20;
    c/=d;
    cout<<"c/=d:"<<c<<endl<<endl;

    cout<<"Relational opertor:"<<endl<<"a=10 and b =5"<<endl;
    a=10,b=5;
    cout<<"a==b:"<<(a==b)<<endl;
    cout<<"a!=b:"<<(a!=b)<<endl;
    cout<<"a>b:"<<(a>b)<<endl;
    cout<<"a<b:"<<(a<b)<<endl;
    cout<<"a<=b:"<<(a<=b)<<endl;
    cout<<"a>=b:"<<(a>=b)<<endl<<endl;

    cout<<"Logical opertor:"<<endl;
    cout<<"1&&0:"<<(1&&0)<<endl;
    cout<<"1||0:"<<(1||0)<<endl;
    cout<<"!0:"<<(!0)<<endl<<endl;

    cout<<"Bitwize operator:"<<endl;
    a=10 ,b=2;
    cout<<"a&b:"<<(a&b)<<endl;
    cout<<"a|b:"<<(a|b)<<endl;
    cout<<"a^b:"<<(a^b)<<endl;
    cout<<"a<<b:"<<(a<<b)<<endl;
    cout<<"a>>b:"<<(a>>b)<<endl<<endl;

    cout<<"Other operator:"<<endl<<"a=10 and b=2"<<endl;
    cout<<"sizeof(a):"<<sizeof(a)<<endl;
    cout<<"Address of a is:"<<&a<<endl;
    cout<<"(a>b)?a:b:"<<((a>b)?a:b)<<endl;



    return 0;
}

/*
-----------------------------------------------------------------------------------------
output:
    Arithmatic opertor:
    a=10 and b=5
    a+b:15
    a-b:5
    a*b:50
    a/b:2
    a++:10
    ++b:6

    Assignment opertor:
    c=20 and d=10
    c+=d:30
    c-=d:10
    c*=d:200
    c/=d:2

    Relational opertor:
    a=10 and b =5
    a==b:0
    a!=b:1
    a>b:1
    a<b:0
    a<=b:0
    a>=b:1

    Logical opertor:
    1&&0:0
    1||0:1
    !0:1

    Bitwize operator:
    a&b:2
    a|b:10
    a^b:8
    a<<b:40
    a>>b:2

    Other operator:
    a=10 and b=2
    sizeof(a):4
    Address of a is:0x61feb0
    (a>b)?a:b:10
    
-----------------------------------------------------------------------------------------    
*/
