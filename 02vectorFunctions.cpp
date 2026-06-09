//    

#include <iostream>
#include <vector>
using namespace std;



int main(void)
{
    vector<char>vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "size of vector = "<< vec.size() << endl;  // size function

    // push_back function
    vector<int>secondVec;
    cout << "size of secondVec = "<< secondVec.size() << endl;  

    secondVec.push_back(25);
    cout << "size of secondVec = "<< secondVec.size() << endl;  
    secondVec.push_back(35);
    secondVec.push_back(45);
    secondVec.push_back(55);

    for(int val : secondVec){
        cout << val << endl;
    }

    // pop_back function
    vector<int>thirdVec = {11, 22, 33};
    cout << "size of thirdVec = "<< thirdVec.size() << endl;
    for(int val : thirdVec)
    {
        cout << val << endl;
    }
    thirdVec.pop_back();
    thirdVec.pop_back();

    cout << "size of thirdVec = "<< thirdVec.size() << endl;
    for(int val : thirdVec)
    {
        cout << val << endl;
    }

    // front and back function
    vector<int>forthVec = {23, 34, 45};
    cout << "front = "<< forthVec.front() << endl;
    cout << "back = "<< forthVec.back() << endl;

    // at = at uses as index like vect[0]

    cout << forthVec.at(1) << endl;


    return 0;
}
/*
    
*/