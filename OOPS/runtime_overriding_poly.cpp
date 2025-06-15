//runtime polymosrphism -overriding
#include<iostream>
#include<vector>
using namespace std;
// to prevent ovveriding we can put virtual in front of that function that will make its priority the lowest

// if we put virtual in inheritance it will be discarded or ignored
class one{

    public:
   virtual void whomi(){//it will have lowest priority 
    cout<<"i am one"<<endl;

   }
};
class two:public one{ //class 2 will now have whomi function 2 times 

    public:
   void whomi(){
    cout<<"i am two"<<endl;
    
   }
};



int main(){
    two obj;  // accessing through pointers
    two *ptr=&obj;
    ptr-> whomi();

//if two is being inherited by one then we can use pointer of one to point any object of two but not vice versa in c++
two ob;
one *pt=&ob;
pt->whomi();// will prioritize whomi of one as it is pointer of one and this all is being decided during runtime
obj.whomi();//will prioritize whomi of two



    //two obj;
    //obj.whomi(); //will print whomi of class two overriding the whomi of I this will be by compiler decided during runtime ad is not predecided 

    return 0;
}