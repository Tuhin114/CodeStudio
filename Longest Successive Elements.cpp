// CodeStudio - Longest Successive Elements
// https://www.codingninjas.com/studio/problems/longest-successive-elements_6811740?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// Brute Force(O(n^2))
/**
 bool linearSearch(vector<int>&a, int num){
    int n = a.size(); //Size of array
    for(int i = 0; i < n; i++){
        if(a[i] == num){
            return true;
        }
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    int longest = 1;
    //Pick a element and search for its consecutive numbers
    for(int i = 0; i < n; i++){
        int x = a[i];
        int cnt = 1;
        //Search for consecutive numbers using linear search
        while(linearSearch(a, x + 1) == true){
            x += 1;
            cnt += 1;
        }
        longest = max(longest, cnt);
    }
    return longest;
}
*/

// Better Approach(O(n))
/**
 int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if(n == 0){
        return  0;
    }
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    //Find longest sequence
    for(int i = 0; i < n; i++){
        if(a[i] - 1 == lastSmaller){
            //a[i] is the next element of the current sequence
            cnt += 1;
            lastSmaller = a[i];
        }else if(a[i] != lastSmaller){
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}
*/

// Optimal Approach
/**
 int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if(n == 0){
        return 0;
    }
    int longest = 1;
    unordered_set<int> st;
    //Put all the array elements into set
    for(int i = 0; i < n; i++){
        st.insert(a[i]);
    }
    //Find the longest sequence
    for(auto it : st){
        //If 'it' is a starting number:
        if(st.find(it - 1) == st.end()){
            //Find consecutive numbers:
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()){
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}
*/