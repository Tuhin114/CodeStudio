// CodeStudio -  Second Largest Number
// https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// vector<int> getSecondOrderElements(int n, vector<int> a) {

//     vector<int> newVector = a;
//     sort(newVector.begin(), newVector.end());
//     vector<int> result;

//     result.push_back(newVector[newVector.size() - 2]);
//     result.push_back(newVector[1]);

//    return result;
// }

// Better Approach
/**
 vector<int> getSecondOrderElements(int n, vector<int> a) {
    int small = INT_MAX, secondSmall = INT_MAX;
    int large = INT_MIN, secondLarge = INT_MIN;
    vector<int> ans;

    for(int i = 0; i < n; i++){
        small = min(small, a[i]);
        large = max(large, a[i]);
    }

    for(int i = 0; i < n; i++){
        if(a[i] < secondSmall && a[i] != small){
            secondSmall = a[i];
        }else if (a[i] > secondLarge && a[i] != large){
            secondLarge = a[i];
        }
    }

    ans.push_back(secondLarge);
    ans.push_back(secondSmall);

    return ans;
}

*/

// Optimal Approach
/**
 vector<int> getSecondOrderElements(int n, vector<int> a) {
    int small = INT_MAX, secondSmall = INT_MAX;
    int large = INT_MIN, secondLarge = INT_MIN;
    vector<int> ans;

    for(int i = 0; i < n; i++){
        if(a[i] < small){
            secondSmall = small;
            small = a[i];
        }else if(a[i] < secondSmall && a[i] != small){
            secondSmall = a[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i] > large){
            secondLarge = large;
            large = a[i];
        }else if (a[i] > secondLarge && a[i] != large){
            secondLarge = a[i];
        }
    }

    ans.push_back(secondLarge);
    ans.push_back(secondSmall);

    return ans;
}

*/
