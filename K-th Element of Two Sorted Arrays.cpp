// CodeStudio -  K-th Element of Two Sorted Arrays
// https://www.codingninjas.com/studio/problems/k-th-element-of-2-sorted-array_1164159?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 int kthElement(vector<int> &arr1, vector<int> &arr2, int n, int m, int k) {
    int p1 = 0, p2 = 0, cnt = 0, ans = 0;

    while (p1 < n && p2 < m) {
        if (cnt == k) {
            break;
        } else if (arr1[p1] < arr2[p2]) {
            ans = arr1[p1];
            p1++;
        } else {
            ans = arr2[p2];
            p2++;
        }
        cnt++;
    }

    // Check if the required kth element is not found yet
    if (cnt != k) {
        // Check if elements in arr1 are remaining
        if (p1 < n) {
            ans = arr1[p1 + k - cnt - 1];
        } else {
            // If arr1 is exhausted, get the kth element from arr2
            ans = arr2[p2 + k - cnt - 1];
        }
    }

    return ans;
}

*/