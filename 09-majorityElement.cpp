// brute force
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//     int majorityElement(vector<int>& nums) {     
//         int n = nums.size();
        
//         for(int val : nums)
//         {
//             int freq = 0;

//             for(int element : nums){
//                 if(element == val){
//                     freq++;
//                 }
//             }
//             if(freq > n/2){
//                 return val;
//             }
//         }
        
//         return -1;     
//     }
// };

// int main(void)
// {
//     Solution sol;

//     vector<int> nums2 = {2, 2, 1, 1, 1, 2};
//     cout << "Majority Element in [2,2,1,1,1,2,2] is: " << sol.majorityElement(nums2) << endl;

//     return 0;
// }

// optimize (sorting)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Solution
// {
//     public:
//     int majorityElement(vector<int>&nums){
//         int n = nums.size();

//         // sort

//         sort(nums.begin(), nums.end());

//         // freq count

//         int freq = 1, ans = nums[0];

//         for(int i = 1; i<n; i++){
//             if(nums[i] == nums[i-1]){
//                 freq++;
//             }
//             else{
//                 freq = 1;
//                 ans = nums[i];

//             }
//             if(freq > n/2){
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

// int main(void)
// {
//     Solution sol;

//     vector<int> nums2 = {2, 2, 1, 1, 1, 2};
//     cout << "Majority Element in [2,2,1,1,1,2,2] is: " << sol.majorityElement(nums2) << endl;

//     return 0;
// }

// moores voting algorithm

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    int majorityElement(vector<int>& nums){
        int freq = 0, ans = 0, n = nums.size();
        for(int i = 0; i<n; i++){
            if(freq == 0){
                ans = nums[i];                    
            }
            if(ans == nums[i]){
                freq++;
            }
            else
            {
                freq--;
            }
        }

        int count = 0;
        for(int val : nums){
            if(val == ans){
                count++;
            }
        }

        if(count > n/2){
            return ans;
        }
        else
        {
            return -1;
        }

        return ans;
    }
};

int main(void)
{
    Solution sol;

    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element in [2,2,1,1,1,2,2] is: " << sol.majorityElement(nums2) << endl;

    return 0;
}

