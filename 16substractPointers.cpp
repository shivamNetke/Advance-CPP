#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int *ptr1;               // 0x401a6b
    int *ptr2 = ptr1 + 2;    // 0x401a73   
                             // 6b + 8bytes
                             // 6c-6d-6e-6f-70-71-72-73
                             // 0x401a73

    cout << ptr1 << endl;          // 0x401a6b
    cout << ptr2 << endl;          // 0x401a73 
    cout << ptr2 - ptr1 << endl;   // 2

    return 0;
} 