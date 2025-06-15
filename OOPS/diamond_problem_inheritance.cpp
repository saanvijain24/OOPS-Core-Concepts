// Diamond problem is a hybrid inheritance problem where when object of four will be called it will create two copiess of a resulting in ambiguity



#include<iostream>
using namespace std;

//heirarichial inheritance
class one{
public:
int a;
one(){
    cout<<"i am one"<<endl;
}
};
class two:public one{
    public:
 int b;
 two(){
    cout<<"i am two"<<endl;
 }

};
class three:public one{
    public:
    int c;
    three(){
       cout<<"i am three"<<endl;
    }
   
   };
//multiple inheritance 

class four:public two, public three{ 
    public:
 int d;
 four(){
    cout<<"i am four"<<endl;
 }


};
int main(){
    four obj;
    return 0;
}