#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowed){  // we rename mid = maxAllowed
    int students = 1;
    int pages = 0;

    for (int i = 0; i < n ; i++)
    {
        if (arr[i] > maxAllowed)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowed)
        {
            pages = pages + arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}  

int allocateBooks(vector<int>&arr, int n, int m){
    if (m > n )
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n ; i++)
    {
        sum = sum + arr[i];
    }

    int ans = -1;
    int st = 0;
    int end = sum;  // range of possible ans [0 -  10]

    while (st <= end )
    {
        int mid = st + (end - st)/2;

        if (isValid(arr, n, m, mid))   // left
        {
            ans = mid;
            end = mid -1;
        }else  // right
        {
            st = mid + 1;
        }
    }
}

int main(void)
{
    vector<int>arr = {2, 1, 3, 4};

    int n = 4;
    int m = 2;

    cout << allocateBooks(arr, n, m) << endl;

    return 0;
}