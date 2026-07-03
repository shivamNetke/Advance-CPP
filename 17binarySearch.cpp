#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:

// binary search with recursion
int recursiveBinarySearch(vector<int>arr, int target, int start, int end){
    if (start <= end)
    {
        
    int mid = start + (end - start)/2;

    if (target < arr[mid])
    {
        return recursiveBinarySearch(arr, target, start, mid-1);
    }
    else if (target > arr[mid])
    {
        return recursiveBinarySearch(arr, target, mid+1, end);
    }
    else
    {
        return mid;
    }
    }
    return -1;
}
    
// iterative binary search
int binarySearch(vector<int>arr, int target)
{
    int start = 0;
    int end = arr.size()-1;
    
    while (start <= end )
    {
        int mid = start + (end + start)/2;

        if (target < arr[mid])
        {
            end = mid-1;
        }
        else if (target > arr[mid])
        {
            start = mid+1;
        }
        else
        {
            return mid;
        }   
    }

    return -1;
}

};

int main(void)
{
    Solution sl;

    vector<int>arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target = 13;

    cout << "target is at index "<< sl.recursiveBinarySearch(arr1, target, 0, 6) << endl;

    return 0;
}