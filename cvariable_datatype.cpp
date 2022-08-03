/*
-----------------------------cpp variable and Datatype----------------------------------------------
    +Cpp Variable:
        -variable is container to hold data.
        -syntax:
            int age=14;
    +Cpp Constant:
        -in cpp we can create constant variable whose value cannot changed.
        -syntax:
            const a=5;
    +cpp Datatype:
        -datatype define the type and size of data associated with variable.
            ---------------------------------------------------
                datatype                size
            ---------------------------------------------------
                int                     2 or 4
                float                   4
                double                  8
                char                    1
                wchar_t                 2
                void                    0
                bool                    1
            ----------------------------------------------------
*/
#include <iostream>
using namespace std;
int main()
{
    int i;
    float f;
    char c;
    double d;
    bool b;
    cout<<"the size of Integer is "<<sizeof(i)<<endl;
    cout<<"the size of Float is "<<sizeof(f)<<endl;
    cout<<"the size of Char is "<<sizeof(c)<<endl;
    cout<<"the size of Double is "<<sizeof(d)<<endl;
    cout<<"the size of Bool is "<<sizeof(b)<<endl;
}


/*
-----------------------------------------------------------------------------------------
output:
        the size of Integer is 4
        the size of Float is 4
        the size of Char is 1
        the size of Double is 8
        the size of Bool is 1    
-----------------------------------------------------------------------------------------    
*/
