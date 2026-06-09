// first method
// #include <iostream>
// #include<vector>
// using namespace std;

// int main(void)
// {
    // vector<int>nums = {2, 2, 1, 5, 4, 1};
    // int ans = 0;

    // // loop

    // for(int i = 0; i < nums.size(); i++){
    //     int count = 0;
    //     for(int j = 0; j < nums.size(); j++){
    //         if(nums[i] == nums[j]){
    //             count++;
    //         }
    //     }

    //     if(count == 1){
    //         cout << "single number is "<< nums[i] << endl;
    //     }
    // }



//     return 0;
// }

    // second method
// #include <iostream>
// #include <vector>
// using namespace std;

// int singleNumber(vector<int> &nums){
//     int result = 0;
//     for(int i = 0; i<nums.size(); i++){
//         result = result^nums[i];
//     }
//     return result;
// }

// int main(void)
// {
//     vector<int>nums = {2, 2, 5, 1, 4, 1};
//     cout << "single number is "<< singleNumber(nums) << endl;

//     return 0;
// }

// third method
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums){
    int result = 0;
    for(int val : nums){
        result = result^val;
    }
    return result;
}

int main(void)
{
    vector<int>nums = {2, 2, 1, 4, 1};
    cout << "single number is "<< singleNumber(nums) << endl;

    return 0;
}
