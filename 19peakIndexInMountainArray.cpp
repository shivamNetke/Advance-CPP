#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:

    int peakIndexInMountainArray(vector<int>&arr)
    {
        int start = 1;
        int end = arr.size()-2;

        while (start <= end)
        {
            int mid = start + (end - start)/2;

            if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
            {
                return mid;
            }
            else if (arr[mid-1] < arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
};

int main(void)
{
    Solution sl;
    
    vector<int>nums = {2, 4, 6, 8, 10, 9, 7, 5, 3, 1};

    cout << "peak value is at index "<< sl.peakIndexInMountainArray(nums) << endl;
    cout << "peak value is "<< nums[sl.peakIndexInMountainArray(nums)] << endl;

    return 0;
}