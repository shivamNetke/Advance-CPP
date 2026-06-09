//    

#include <iostream>
#include<vector>
using namespace std;



int main(void)
{
    vector<int>vec;
    vec.push_back(11);
    vec.push_back(34);

    cout << "size of vec = "<< vec.size() << endl;
    cout << "capacity of vec = "<< vec.capacity() << endl;

    vec.push_back(98);

    cout << "size of vec = "<< vec.size() << endl;
    cout << "capacity of vec = "<< vec.capacity() << endl;

    return 0;
}
/*
    
*/