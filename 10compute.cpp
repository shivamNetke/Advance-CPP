#include <iostream>
using namespace std;

class Solution {
public:
  double myPow(double x, int n) {
    if (n == 0)
      return 1.0;
    if (x == 0)
      return 0.0;
    if (x == 1)
      return 1.0;
    if (x == -1) {
      return (n % 2 == 0) ? 1.0 : -1;
    }

    long binaryForm = n;
    if (n < 0) {
      x = 1 / x;
      binaryForm = -binaryForm;
    }

    double ans = 1;
    while (binaryForm > 0) {
      if (binaryForm % 2 == 1) {
        ans = ans * x;
      }
      x = x * x;
      binaryForm = binaryForm / 2;
    }
    return ans;
  }
};

int main(void) {
  Solution sol;
  cout << sol.myPow(2.0, 10) << endl;

  return 0;
}