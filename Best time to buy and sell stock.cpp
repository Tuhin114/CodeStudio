// CodeStudio -  Best time to buy and sell stock
// https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_6194560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int bestTimeToBuyAndSellStock(vector<int>&prices) {
//     int maxPro = 0;
//     int n = prices.size();
//     int minPrice = INT_MAX;

//     for(int i = 0; i < n; i++){
//         minPrice = min(minPrice,prices[i]);
//         maxPro = max(maxPro, prices[i] - minPrice);
//     }

//     return maxPro;
// }
