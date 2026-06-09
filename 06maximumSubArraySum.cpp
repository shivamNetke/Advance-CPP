#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = 0;

    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;
        for(int end = start; end < n; end++)
        {
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "maximum subarray sum = "<< maxSum<< endl;

    return 0;
}