// CodeStudio - Smallest divisor
// https://www.codingninjas.com/studio/problems/smallest-divisor-with-the-given-limit_1755882?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 int possible(vector<int>& arr, int div){

    int n = arr.size();
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += ceil((double(arr[i])/(int)(div)));
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int limit)
{
    int n = arr.size();
    int maxi = INT_MIN;

    if(n > limit){
        return -1;
    }

    for(int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
    }

    int low = 1;
    int high = maxi;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(possible(arr, mid) <= limit){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
}
*/