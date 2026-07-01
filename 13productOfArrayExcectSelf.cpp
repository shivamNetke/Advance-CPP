// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public:
//     vector<int>productExceptSelf(vector<int>&nums){
//         vector<int>ans(nums.size(), 1);
//         for(int i = 0; i<nums.size(); i++){
//             for(int j = 0; j<nums.size(); j++){
//                 if(i != j){                
//                 ans[i] = ans[i] * nums[j];
//                 }
//             }
//         }
//         return ans;
//     }
// };

// int main(void)
// {
//     Solution sol;
//     vector<int>arr = {2, 4, 6, 8};
//     vector<int> result = sol.productExceptSelf(arr);

//     cout << "ans = ";
//     for (int x : result) {
//         cout << x << " ";
//     }

//     return 0;
// }

// second method 


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution{
//     public:
//     vector<int>productExceptSelf(vector<int>&nums){
//         int n = nums.size();
//         vector<int>ans(n, 1);
//         vector<int>prefix(n, 1);
//         vector<int>suffix(n, 1);

//         // prefix

//         for(int i = 1; i<n; i++){
//             prefix[i] = prefix[i-1] * nums[i-1];
//         }

//         // suffix

//         suffix[n-1] = 1;
//         for(int i = 2; i >= 0; i--){
//             suffix[i] = suffix[i+1] * nums[i+1];
//         }

//         // answer

//         for(int i = 0; i<n; i++){
//             ans[i] = prefix[i] * suffix[i];
//         }

//         return ans;

//     }
// };

// int main(void)
// {
//     Solution sol;
//     vector<int>arr = {1, 2, 3, 4};
//     vector<int> result = sol.productExceptSelf(arr);

//     cout << "ans = ";
//     for (int x : result) {
//         cout << x << " ";
//     }

//     return 0;
// }

// third method 


#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int>productExceptSelf(vector<int>&nums){
        int n = nums.size();
        vector<int>ans(n, 1);

        // prefix
        int prefix = 1;
        for(int i = 1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        // suffix
        int suffix = 1;
        for(int i = 2; i >= 0; i--){
            suffix = suffix * nums[i+1];
            ans[i] = ans[i] * suffix;
        }

        return ans;

    }
};

int main(void)
{
    Solution sol;
    vector<int>arr = {1, 2, 3, 4};
    vector<int> result = sol.productExceptSelf(arr);

    cout << "ans = ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}