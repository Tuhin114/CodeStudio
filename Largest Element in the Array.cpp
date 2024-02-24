// CodeStudio - Largest Element in the Array
// https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// int largestElement(vector<int> &arr, int n) {

//     sort(arr.begin(),arr.end());
//     return arr[n-1];
// }

// Aliter
/*
#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n) {
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        maxi = max(maxi,arr[i]);
    };
    return maxi;
}*/
