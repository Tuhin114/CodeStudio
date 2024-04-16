// CodeStudio - Count Frequency in a range
//  https://www.naukri.com/code360/problems/count-frequency-in-a-range_8365446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/**
 vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> freq;
    unordered_map<int, int> mpp;

    for(int i=0; i<nums.size();i++){
        mpp[nums[i]]+=1;
    }

   for(int i=1; i<=n; i++){
        freq.push_back(mpp[i]);
   }

    return  freq;
}
*/