//Here for todays problem of the day ,we sort the array initially and then subtract the first two prices from the 
// total money.If the operation results in a non negative answer ,we return the answer,or else we return the 
//original money we have.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        if((money-(prices[0]+prices[1]))>=0){
            return money-(prices[0]+prices[1]);
        }
        return money;
    }
};
// same code in java
// class Solution {
//     public int buyChoco(int[] prices, int money) {
//         Arrays.sort(prices);
//         if(money-(prices[0]+prices[1])>=0){
//             return money-(prices[0]+prices[1]);
//         }
//         return money;
//     }
// }