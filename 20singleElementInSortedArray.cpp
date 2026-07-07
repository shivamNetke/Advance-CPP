#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();

        if (n == 1)
            return arr[0];

        int st = 0;
        int end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mid == 0 && arr[0] != arr[1])
                return arr[0];

            if (mid == n - 1 && arr[n - 1] != arr[n - 2])
                return arr[n - 1];

            if (mid > 0 && mid < n - 1 &&
                arr[mid] != arr[mid - 1] &&
                arr[mid] != arr[mid + 1])
                return arr[mid];

            if (mid % 2 == 0) {          // even index
                if (arr[mid] == arr[mid - 1])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            else {                       // odd index
                if (arr[mid] == arr[mid - 1])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution sl;

    vector<int> nums = {3, 3, 7, 7, 10, 11, 11};

    cout << "Single element = " << sl.singleNonDuplicate(nums) << endl;

    return 0;
}