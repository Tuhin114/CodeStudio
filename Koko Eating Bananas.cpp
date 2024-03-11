// CodeStudio - Koko Eating Bananas
// https://www.codingninjas.com/studio/problems/minimum-rate-to-eat-bananas_7449064?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 #include <bits/stdc++.h>

int findMax(vector<int> v){

    int maxi = INT_MIN;
    int n = v.size();

    for(int i = 0; i < n; i++){
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

int calculateHr(vector<int> v, int hourly){

    long long int totalHr = 0;
    for(int i = 0; i < v.size(); i++){
        totalHr += ceil((v[i])/(double)(hourly));
    }
    return totalHr;
}


int minimumRateToEatBananas(vector<int> v, int h) {

    int low = 1;
    int high = findMax(v);

    while(low <= high){
        int mid = low + (high - low)/2;

        long long int totalHr = calculateHr(v, mid);

        if(totalHr <= h){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
}
*/