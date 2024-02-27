// CodeStudio -  Left Rotate an Array by One
// https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 #include <bits/stdc++.h>
vector<int> rotateArray(vector<int>& arr, int n) {
    int firstInt = arr[0];

    for(int i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = firstInt;
    return arr;
}

*/