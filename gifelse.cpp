/*
-----------------------------cpp If...else----------------------------------------------
    -it used to run one block of code under certain condition.
    -there are three form of if....else statement in cpp.
        1]if
            if(condition)
            {
                statement;
            }
        2]if.......else
            if(condition)
            {
                statement
            }
            else
            {
                statement
            }
        3]if.......else if.....else
            if(condition)
            {
                statement
            }
            else if(condition)
            {
                statement
            }
            else
            {
                statement
            }
*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"1]If statement:"<<endl;
    int a,b,c;
    cout<<"Enter the number:";
    cin>>a;
    if(a%2==0)
    {
        cout<<"the number is even"<<endl<<endl;
    }

    cout<<"2]If..else statement:"<<endl;
    cout<<"Enter the two number:";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"the number "<<a<<" is greater"<<endl<<endl;
    }
    else
    {
        cout<<"the number "<<b<<" is greater"<<endl<<endl;
    }

    cout<<"3]If..else if....else statement:"<<endl;
    cout<<"Enter the three number:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"the number "<<a<<" is greater"<<endl<<endl;
        }
        else{
            cout<<"the number "<<c<<" is greater"<<endl<<endl;
        }
       
    }
    else if(b>c)
    {
        cout<<"the number "<<b<<" is greater"<<endl<<endl;
    }
    else{
        cout<<"the number "<<c<<" is greater"<<endl<<endl;
    }
  
    return 0;
}


/*
-----------------------------------------------------------------------------------------
output:
    1]If statement:
    Enter the number:12
    the number is even

    2]If..else statement:
    Enter the two number:12 34
    the number 34 is greater

    3]If..else if....else statement:
    Enter the three number:16
    23  
    98
    the number 98 is greater
-----------------------------------------------------------------------------------------    
*/
