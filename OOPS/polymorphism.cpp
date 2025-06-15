#include <iostream>
using namespace std;
// polymorphism: something in many forms
class Testfunction_overloading
{
public:
    // compile time polymorphism(overloading)/static binding : Function overloading (keeping same function name) -both functions should have same name , no.or type of arguments and parameters of function should be diffrent, 
    

    void sum(int a, int b)
    { // this function will only work if only 2 parameters are passed in the object when 3 are passed it will not work
        cout << a + b << endl;
    }
    void sum(int a, int b, int c)
    { // this function will work when 3 parameters are passed
        cout << a + b + c << endl;
    }
    void sum(int a, float b)
    { // same number of argument as first one but diffrent data types

        cout << a + b << endl;
    }
    void sum(int *a, int *b)
    { // will be operator overloading as first one argument is int data type and this is pointer data type

        cout << *a + *b << endl;
    }

    // even though the function can have same name and diffrent argument but they will not be overloaded if they have diffrent return type as it not be compile time decision anymore and it will get compiler confused with its ambigious behaviour hence throwing and error
    // DEFAULT PARAMETER :
    void sum(int a, int b, int c = 0)
    {
        cout << a + b << endl; // it will still run and c's default value is zero i.e if no argument for c is passed during calling then compiler will automatically see it as zero and when all three values are given it will act normally

    }
    //whe you want to make default argument you need to do it in left to right fashion without break to not confuse our compiler
    // i.e: void sum(int a=0, int b,int c=0 ) is not allowed as there is a break in middle while void sum(int a, int b=0, int c=0)is allowed as it will not confuse the compiler
    //if in 2 function one v is pass by value and other is pass by pointer then it will be overloaded as diffrent data type. but if one is pass by value and other is pass by referance it will not be overloaded as contradictory ambiguity exists
};
//jaise hi compiler confuse hoga kaunse function ko run kru tab error aa jayega yaani jab aap sure ho dekhkr ki ye wala function run hoga tab hi overloading hogi verna error aa jayega

class TestOperator_overloading{
//complex numebrs



};


int main()
{

    Testfunction_overloading t1;
    t1.sum(10, 20, 30);

    return 0;
}