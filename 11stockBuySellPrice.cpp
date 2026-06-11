#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int maxProfit = 0, bestBuy = prices[0];
        for(int i = 1; i<prices.size(); i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit, prices[i]-bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};

int main(void)
{
    Solution sol;
    vector<int>price = {7, 1, 5, 3, 6, 4};
    cout << "maxProfit: "<<sol.maxProfit(price) << endl;

    return 0;
}