// CodeStudio - Maximum Subarray Sum
// https://www.codingninjas.com/studio/problems/maximum-subarray-sum_630526?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 long long maxSubarraySum(vector<int> arr, int n)
{
    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];

        maxi = max(sum,maxi);

        if(sum < 0){
            sum = 0;
        }
    }

    if(maxi < 0){
        maxi = 0;
    }

    return maxi;
}
*/