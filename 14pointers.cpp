
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int a = 10;
//     int *ptr = &a;
//     int **parPtr = &ptr;
//     int *nullPtr;
//     int *nullPointer = NULL;

//     cout << "a = "<< a << endl;
//     cout << "addr of a = "<< &a << endl;
//     cout << "ptr = "<< ptr << endl;
//     cout << "addr of ptr = "<< &ptr << endl;
//     cout << "parPtr = "<< parPtr << endl;
//     cout << "addr of parPtr = "<< &parPtr << endl;
//     cout << "*ptr = "<< *(ptr) << endl; // * give value of that address
//     cout << "**parPtr = "<< **parPtr << endl;  // used dereference operator twice so it gives value
//     cout << "**parPtr = "<< *(parPtr) << endl; // used dereference operator once thats why it gives address because address is that value 
//     cout << "*nullPtr = "<< nullPtr << endl;
//     cout << "*nullPointer = "<< nullPointer << endl;


//     return 0;
// }

#include <iostream>
using namespace std;



int main(void)
{
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;

    /*
    output
    
    5
    5
    0x61ff08
    0x61ff08
    */

    return 0;
}