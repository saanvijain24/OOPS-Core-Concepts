#include <iostream>
using namespace std;
// encapsulation(bindidng and hiding data) means binding class variables and methods together along with hinding the data , encapsulation is also known as the data hiding method itt uses 3 keywords for this private,public,protected by default all the methods and variables in a class are private i.r they cannot be used outside the class but when declared public all the methods and variables within public scope can be used anywhere in your code
// for achieving encapsulation access specifiers are used
class Test
{
private: // to hide data from user and here data is also binded with its functionalities below
    int a;
    int b;

public:
    /* since b and a are private elements so we will set value of a into new public variable to use it
     like you have a password which is private but to use it first you set it and then use it*/
     
    void setA(int aa)//setter
    { /* here we took 'aa' because if we put 'a' compiler will get confused
       to use'a' only we used 'this' keyword pointer*/
        a = aa;
        this->a = a; // this will pointer towards a's address and it is considered better method to set variable
    }
    void setB(int bb)
    {
        b = bb;
    }
    // to print this value we will create get function
    int getA()//getter
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

int main()
{
    Test obj;
    obj.setA(10); // To set value of a and b
    obj.setB(20);
    // to get the values
    cout << obj.getA() << endl;
}