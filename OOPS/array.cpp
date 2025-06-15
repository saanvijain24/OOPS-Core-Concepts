#include <iostream>
using namespace std;
int main()
{
    // array is collection of elements of same data type
    //IMPORTANT:  array's name is not only name of the array but also the pointer to that array which stores the address of the first element of that array
    int arr[] = {0};               // array is created without declaring its size
    int array[5];                  // declarartion with size
    int arra[5] = {1, 2, 3, 4, 5}; //
    int array1[5] = {1, 2};        // rest 3 values will be 0
    cout << arr << endl;           // address of first element of array will be printed
    //0 array indexing start with 0 because

    int *ptr = arr;       // stores address of first element
    cout << *ptr << endl; // first element value will be printed
    ptr++;
    cout << *ptr << endl; // it will not print the second element as it is incremented by only 1 but the next element is tored at next 4th memory as its int type hence data type of pointer is necessary ;
    cout << ptr << endl;// it will print address of first variable of the array
    cout<<arr<<endl;// will also print the element of the first element 


return 0;

}









