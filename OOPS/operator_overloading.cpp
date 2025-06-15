#include<iostream>
#include<vector>
using namespace std;
class test{
    //operator overloading
public:
int a ;
int b;
//sum object will take input from user object with return type same as object i.e class
test operator+(test ob){//overloads + operator
    test ans;
    ans.a=a+ob.a;
    ans.b=b+ob.b;
    return ans;
}




};








int main(){
    test ob1;
    test ob2;
    //test ans=ob1.sum(ob2);//the a in function will be of ob1 and ob.a will be a of ob2//this will call copy constructor
    test ans2=ob1+ob2;//will call operator overloading function
    return 0;
}