// CodeStudio - Largest Subarray Sum Minimized
//  https://www.codingninjas.com/studio/problems/largest-subarray-sum-minimized_7461751?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int countPartitions(vector<int> a, int maxSum){
//     int n = a.size();
//     int partitions = 1;
//     long long subArraySum = 0;
//     for(int i = 0; i < n; i++){
//         if(subArraySum + a[i] <= maxSum){
//             //Insert element to current subarray
//             subArraySum += a[i];
//         }else{
//             //Insert element to next subarray
//             partitions++;
//             subArraySum = a[i];
//         }
//     }
//     return partitions;
// }

// int largestSubarraySumMinimized(vector<int> a, int k) {
//     int low = *max_element(a.begin(), a.end());
//     int high = accumulate(a.begin(), a.end(), 0);

//     //Apply Binary Search
//     while(low <= high){
//         int mid = low + (high - low)/2;
//         int partitions = countPartitions(a, mid);
//         if(partitions > k){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return low;
// }