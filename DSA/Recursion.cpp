#include<iostream>
using namespace std;
//print number n to 1 using recursion
void print(int n){
    if(n<=0)return;
    cout<<n<<" ";
    print(n-1);
}
//print number 1to n
void print2(int n){
    if(n<=0)return;
    print(n-1);
    cout<<n<<" ";
    
}
//sum of n natural numbers
int sum1(int n){
    int add=0;
    if(n<=0){ return 0 ;}
    
    for(int i=0;i<n;i++){
        add+=i;
    }
    
    return add;
}
// sum of digits of number
int sum(int n){
    if(n==0)return 0;
    return n%10+sum(n/10);

}


int main(){
    print2(3);
    return 0;
}