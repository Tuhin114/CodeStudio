// CodeStudio - Longest Subarray With Sum K
//  https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int longestSubarrayWithSumK(vector<int> a, long long k)
// {
//     int n = a.size();

//     int left = 0;
//     int right = 0;
//     long long sum = a[0];
//     int maxLen = 0;
//     while (right < n)
//     {
//         // if sum > k, reduce the sub array from left until sum becomes less or equal to k:
//         while (left <= right && sum > k)
//         {
//             sum -= a[left];
//             left++;
//         }

//         // if sum = k, update the maxLen i.e answer:
//         if (sum == k)
//         {
//             maxLen = max(maxLen, right - left + 1);
//         }

//         // Move forward the right pointer:
//         right++;
//         if (right < n)
//         {
//             sum += a[right];
//         }
//     }
//     return maxLen;
// }