// CodeStudio - Count All Subarrays With Given Sum
// https://www.codingninjas.com/studio/problems/subarray-sums-i_1467103?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {

    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];

            if(sum == k){
                count++;
            }
        }
    }
    return count;
}
*/