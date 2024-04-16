// CodeStudio - Highest / Lowest Frequency Elements
//  https://www.naukri.com/code360/problems/k-most-occurrent-numbers_625382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int, int> mp;
    int mn = INT_MAX, mx = INT_MIN, a = INT_MIN, b = INT_MAX;

    for(int i : v) mp[i]++;

    for(auto [i,j] : mp) {
        if(j > mx) mx = j,a = i;
        else if(j == mx && i < a) a=i;
        if(j < mn) mn=j,b=i;
        else if(j == mn && i < b) b=i;
    }
    return {a,b};
}
*/