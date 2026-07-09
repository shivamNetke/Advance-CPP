#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int isPossibleAnswer(vector<int>&arr, int n, int m, int maxAllowedTime)
{
    int painters = 1; int time = 0;
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] > maxAllowedTime) return false;

        if (time + arr[i] <= maxAllowedTime )
        {
            time = time + arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int>&arr, int n, int m)
{
    int sum = 0, maxVal = INT_MIN;   // FIX 1
    for (int i = 0; i < n ; i++)
    {
        sum = sum + arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while (st <= end )
    {
        int mid = st + (end - st)/2;

        if (isPossibleAnswer(arr, n, m, mid)) // left
        {
            ans = mid;
            end = mid - 1;    // FIX 2
        }
        else  // right
        {
            st = mid + 1;
        }
    }

    return ans;   // FIX 3
}

int main(void)
{
    vector<int>arr = {40, 30, 10, 20 };
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;

    return 0;
}