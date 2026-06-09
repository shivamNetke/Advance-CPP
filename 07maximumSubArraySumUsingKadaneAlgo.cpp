#include <iostream>
#include<vector>
using namespace std;

int maxSubArray(vector <int> &nums){
    int currSum = 0;
    int maxSum = nums[0];

    for(int value : nums){
        currSum = currSum + value;
        if(currSum > maxSum){
            maxSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(void)
{
    vector<int>nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "maximum subarray sum = "<<maxSubArray(nums) << endl;

    return 0;
}