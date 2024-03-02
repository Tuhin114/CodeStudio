// CodeStudio - Longest Subarray With Sum K
//  https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// Most Optimal approach(2 Pointer)
/**
 int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();

    int left = 0;
    int right = 0;
    long long sum = a[0];
    int maxLen = 0;
    while (right < n)
    {
        // if sum > k, reduce the sub array from left until sum becomes less or equal to k:
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e answer:
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward the right pointer:
        right++;
        if (right < n)
        {
            sum += a[right];
        }
    }
    return maxLen;
}
*/

// Hash Map
/**
 #include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    //Hashing
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}
*/