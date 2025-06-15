#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n, c;

    for (int i = 0; i < n; i = i + c)
    {
    } // loop me bhale hi kuch plus hora ho ya minus humesha time complexity O(n)hoga but agar n hii plus minus hora hota toh O(1) hoti
    for (int i = 1; i < n; i = i * c)
    {
        // 1,c,c^2,c^3....c^k-1//if loop is running for k time
        /*
        to fing k
        c^k-1<=n
 it should be less then n
 taking log both sides
 log(c^k-1)<=logn       //log is in base c
 k-1(logc)<=logn
 k<log(n+1)

 hence agar kuch bhi multiply krre ho constant se ya divide krre ho toh time complexity hogi  O(logn)
        */
    }

    for (int i = 0; i < n; i = pow(i, c))
    {
        /*
        time complexity=O(log(log n))
        */
    }
// if any code contains parallel loops 

    int fun()
    ;{
        for(int i=0;i<n;i=i+c){


        }   
        for(int i=0;i<n;i=i+c){


        }       

        //time complexity :O(n);

    }
    //jiski time complexity zayada hogi that would be time complexity of that algo in parallel loops
    int fun();{
        for(int i=0;i<n;i=i+c){
        for(int i=0;i<n;i=i+c){


        }    
    }   // for nested loops O(n^2)(time complexity will be multiplied)

    }
// for recursion

int fun(int n)
;{
    if(n<=0)return 0;
    fun(n-1);
    fun(n-1);//T(n-1)

    //T(n)= T(n-1)+T(n-1)+c ;//as  loop is gonna run at contant time c hence add it as well
    return 0;
}

// space complexity : space kitna use hora hai for that algo
//max space complexity would be O(n) in 99% cases 

/*
best to worst time complexity
O(1)<log (n)<O(n)<O(nlogn)<O(n^2)< O(2^n)(almost ye wali recursion hi hogi)


// jab bhi time constraints 10^5  hoge tab nlogn se kam me solve krna padega verna reject ho jayega isse pata lag  jayega ki sorting lagegi ya nahi
for n^3,n^4 tab O(n^2) jab  question solve na ho isme then 2^n yaani question recursion se solve hoga



*/



    return 0;
}