//contructor are special function with no return type has same name as class
    //if no constructer is created in class by user then compiler will automatically create a constructer in backend
    //


#include<iostream>
using namespace std;
class test{
public:
int a;
int *ptr;
//(default/non prameterized constructor ie jo compiler khud banata hai ya constructor with no parameter )
test(){
     a=10;//will set default value and prevent a from getting garbage value

    ptr=new int(20);//dynamic memory allocation stored these values in heap
    
    cout<<"hello"<<endl;
}



//parameterized constructer: jab aap object bana rahe ho tab hi aap values intialize krke pass kar sakte ho(declaration and intialization of variables at object calling)
test(int a){
this->a=a;         
} 
//test(int a=0)// will run for both object with parameters passed and object without parameters passed






//copy constructor
test(const test &obj){ //test &obj is object of that class and we pass it by value taaki voh infinite loop me na fase and const to make it read only and no changes are made on that object 
a=obj.a;
int data =*(obj.ptr);//deep copy
ptr=new int(data);

}



};

int main(){
    test obj;//constructor will be automatically called
    
    test ob2(obj);//object 1 values will be copied in obj 2 and automatically copy constructor will be called if we created a copy constructor it will be called otherwise constructor will automatically create it by default(which will copy line by line )
   
    obj.a=100;
    *(obj.ptr)=200;
    cout<<ob2.a<<endl;//even though we changed the value it will still print 10
    cout<<*(ob2.ptr)<<endl;//the value was made to be stored at a diffrent address in heap memory dynamically now we will print 200 which is value stored at that address


    
// important questions
//agar parameterized constructor bana rakha hai class me toh kya aap object without argument de sakte ho : ans:no only if we have passed default value in it

//shallow and deep copy
//copy constructor full knowledge
//copy constructor me pass by referance hi kyu hota hai


}


