// CodeStudio - Longest Subarray With Sum K II
//  https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_5713505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// using Map
//  #include <bits/stdc++.h>
//  int getLongestSubarray(vector<int>& nums, int k){

//     int n = nums.size(); //Size of the array

//     map<int,int> preSumMap;
//     int sum = 0;
//     int maxLen = 0;
//     for(int i = 0; i < n; i++){
//         //Calculate the prefix sum till index i:
//         sum += nums[i];

//         //If the sum = k, update the maxLen:
//         if(sum == k){
//             maxLen = max(maxLen, i + 1);
//         }

//         //Calculate the sum of remaining part i.e x-k
//         int rem = sum - k;

//         //Calculate the length and update maxLen:
//         if(preSumMap.find(rem) != preSumMap.end()){
//             int len = i - preSumMap[rem];
//             maxLen = max(maxLen, len);
//         }

//         //Finally, update the map checking the conditions:
//         if(preSumMap.find(sum) == preSumMap.end()){
//             preSumMap[sum] = i;
//         }
//     }
//     return maxLen;
// }