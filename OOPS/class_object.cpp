#include <iostream>
using namespace std;
class Test
{ // this is just a chunk of code and has no memory taken and act as a blueprint to implement it we will create and call it in its object
  // class is a user defined data type
public:    // by default all the methods and variables in a class are private i.r they cannot be used outside the class but when declared public all the methods and variables within public scope can be used anywhere in your code
    int a; // data
    int b; // data
    void sum()
    {
        cout << a + b << endl; // functionality
    }
}t1;//t1 is object of class which can be declared within the class itself
int main()
{
    // object is a real life entity which is implemented via classes which is blueprint of these entities

    // 1st way of object declaration
    Test obj;

    /* syntax: class_name object_name;(object declaration)
     above line means that we have created a block called obj with data type test*/

    obj.a = 10; // assigning values
    obj.b = 20;
    obj.sum(); // function calling

    // 2nd way of object declaration
    Test obj2 = {10, 20};
    obj.sum();

   //dynamic object is created
    Test *ptr=new Test(); //new creates an object of data type test and pointer's type should be objects type; 
    ptr->a=10;//(concept of this keyword)
    ptr->b=20;
    cout<<ptr->a<<endl;
    ptr->sum();
    

}