// the third access specifier is used here in inheritance known as protected which can allow members to be accessed within the class but as well in its derived class but not outside these
//inheritance  me khali private elements nahi jayege khhali public and protect reuse hote hai;
//protected agar inherit hota hai then both public and protected are inherited in protected form , in public form  protected element is inherited in protected and public elements in public



#include <iostream>
#include <vector>
using namespace std;
//multilevel inheritance
class one{//will have only a
public:
int a;
one (){
    cout<<"one"<<endl;
}
};
class two: public one{//will have a,b
    public:
    int b;
    two (){
        cout<<"two"<<endl;
    }
    };
class three:public two{// will have a,b,c
        public:
        int c;
        three (){
            cout<<"three"<<endl;
        }
        };
//multiple inheritance

class A{
    public:
    int a;
    A(){
        cout<<"A"<<endl;
    }
};
class B{
    public:
    int b;
    B(){
        cout<<"B"<<endl;
    }
};
class C:public A,public B{// C will inherit both A and B which are both base classes;
    int c;
    C(){
        cout<<"C"<<endl;
    }
};
//
class four{
public:
int d;
four(){
    cout<<"four<<endl;";
}

};






int main()
{
    three obj;
    //obj.a=10;
    //obj.print();
    return 0;
}

//jab test2 ka object banayege tab 2 object automatically banega one for test 1 and other for test 2