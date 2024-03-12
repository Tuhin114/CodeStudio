// CodeStudio - Rose Garden
// https://www.codingninjas.com/studio/problems/rose-garden_2248080?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 bool possible(vector<int> arr, int day, int m, int k){
    int n = arr.size();
    int count = 0;
    int noOfBouq = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] <= day){
            count++;
        }else{
            noOfBouq += (count/k);
            count = 0;
        }
    }
    noOfBouq += (count/k);

    if(noOfBouq >= m){
        return true;
    }else{
        return false;
    }
}

int roseGarden(vector<int> arr, int k, int m)
{
    long long int val = k*1ll*m*1ll;
    int n = arr.size();
    if(val > n){
        return -1;
    }

    int maxi = INT_MIN;
    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    int low = mini;
    int high = maxi;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(possible(arr, mid, m, k)){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
}
*/