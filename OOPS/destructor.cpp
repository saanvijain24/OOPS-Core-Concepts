#include<iostream>
using namespace std;
//destructor are needed
int main(){
    int *ptr=new int (10);//in cpp and c this will not be deleted even after object is discarded and we need destructor to delete it
    return 0;
}