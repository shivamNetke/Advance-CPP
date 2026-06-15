#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int>productExceptSelf(vector<int>&nums){
        vector<int>ans(nums.size(), 1);
        for(int i = 0; i<nums.size(); i++){
            for(int j = 0; j<nums.size(); j++){
                if(i != j){                
                ans[i] = ans[i] * nums[j];
                }
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution sol;
    vector<int>arr = {2, 4, 6, 8};
    vector<int> result = sol.productExceptSelf(arr);

    cout << "ans = ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}