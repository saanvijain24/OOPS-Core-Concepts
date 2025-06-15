#include <iostream>
using namespace std;

int main() {
    // Pointer is a data type which stores the memory address of a variable

    int a = 10; 
    // 'a' is a variable of type int, stored in memory (typically 4 bytes for int)

    cout << a << endl;   // Will print the value of 'a', i.e., 10
    cout << &a << endl;  // Will print the memory address of 'a'

    // '&' is the address-of operator

    // Pointers: store the address of a variable
    // The data type of the pointer should match the data type of the variable it points to
    // You can access the value at that memory address using dereferencing

    int* ptr = &a; // Initializing the pointer with the address of 'a'

    cout << ptr << endl;   // Will print the memory address of 'a'
    cout << *ptr << endl;  // Dereferencing the pointer, prints the value at the address (10)

    int b = 10;
    int* ptr2 = &b;

    *ptr = 100; // This changes the value at the address stored in 'ptr' (which points to 'a'), not 'b'

    // Octal notation
    int c = 010; 
    // This is not binary or decimal, it's octal (base 8), so the value is 8 in decimal
    cout << c << endl; // Will print 8

    // Static memory allocation
    int d = 10;

    // Dynamic memory allocation
    int* ptr3 = new int(10); 
    // 'new' keyword dynamically allocates memory at runtime and returns the address

    cout << *ptr2; // Prints the value of 'b', which is still 10

    // Pointer arithmetic:
    // If you increment a pointer (e.g., ptr++), it moves by the size of the data type it points to
    // For int*, it would move by 4 bytes (assuming int is 4 bytes)

    return 0;
}
