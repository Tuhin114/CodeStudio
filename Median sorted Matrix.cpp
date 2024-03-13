// CodeStudio - Median in a row-wise sorted Matrix
// https://www.codingninjas.com/studio/problems/median-of-a-row-wise-sorted-matrix_1115473?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 int upperBound(vector<int>& arr, int target, int n) {
    int left = 0;
    int right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int countSmaller(vector<vector<int>> &matrix, int n, int m, int x){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cnt += upperBound(matrix[i], x, m);
    }
    return cnt;
}


int median(vector<vector<int>> &matrix, int n, int m) {
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i = 0; i < n; i++){
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][m - 1]);
    }

    int req = (n * m) / 2;
    while(low <= high){
        int mid = (low + high)/2;
        int smallEqual = countSmaller(matrix, n, m, mid);
        if(smallEqual <= req){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}
*/