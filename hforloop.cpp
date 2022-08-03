/*
-----------------------------cpp For Loop----------------------------------------------
 -it is used to reapet block of code.
 -syntax:
    for(initiliztion;condition;inc/dec)
    {
        statement
    }
    -infinite loop
        for(;;)
        {
            
        }
*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"Odd numbers between 1 to 20 Are:";
    for(int i=1;i<=20;i++)
    {
        cout<<i<<" ";
    }
}

/*
-----------------------------------------------------------------------------------------
output:
        Odd numbers between 1 to 20 Are:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 
-----------------------------------------------------------------------------------------    
*/
