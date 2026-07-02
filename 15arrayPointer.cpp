// #include <iostream>
// #include <vector>
// using namespace std;

// int main(void)
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int *ptr = (arr+1);
//     int *ptr1 = (arr+2);
//     int *ptr2 = (arr+3);
//     int *ptr3 = (arr+4);

//     cout << arr << endl;
//     cout << ptr << endl;
//     cout << ptr1 << endl;
//     cout << ptr2 << endl;
//     cout << ptr3 << endl;


   
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;


    return 0;
}