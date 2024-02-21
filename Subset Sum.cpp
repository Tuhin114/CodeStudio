// CodeStudio - Subset Sum
// https://www.codingninjas.com/studio/problems/subset-sum_3843086?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 void subsetSumHelper(int ind, vector<int> &arr, int n, vector<int> &ans, int sum) {
    if (ind == n) {
        ans.push_back(sum);
        return;
    }

    // Element is picked
    subsetSumHelper(ind + 1, arr, n, ans, sum + arr[ind]);

    // Element is not picked
    subsetSumHelper(ind + 1, arr, n, ans, sum);
}

vector<int> subsetSum(vector<int> &num) {
    int n = num.size();

    vector<int> ans;
    subsetSumHelper(0, num, n, ans, 0);

    sort(ans.begin(), ans.end());
    return ans;
}

*/