// CodeStudio -  Superior Elements
// https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// Brute force approach(wrong)
/**
 vector<int> superiorElements(vector<int>& a) {
    vector<int> ans;
    int n = a.size();

    for (int i = 0; i < n; i++) {
        bool leader = true;

        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                leader = false;
                break;
            }
        }

        if (leader) {
            ans.push_back(a[i]);
        }
    }

    return ans;
}
*/

// Optimal Approach
/**
 vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    for(int i = n - 1; i >= 0; i--){
        if(a[i] > maxi){
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }

    sort(ans.begin(), ans.end());
    return ans;
}
*/