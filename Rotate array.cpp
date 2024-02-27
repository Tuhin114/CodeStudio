// CodeStudio Rotate array
// https://www.codingninjas.com/studio/problems/rotate-array_1230543?leftPanelTabValue=PROBLEM

// vector<int> leftrotate(vector<int> arr, int k){

//     vector<int> temp1;

//     for(int i=k; i<arr.size(); i++){
//         temp1.push_back(arr[i]);
//     }
//     for(int i = 0; i<k; i++){
//         temp1.push_back(arr[i]);
//     }

//     return temp1;
// }

// vector<int> rotateArray(vector<int>arr, int k) {
//     return leftrotate(arr, k%arr.size());
// }

// Approach 2
/**
 class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> temp(nums.size());
        for(int i = 0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        //Copy temp into num vector
        nums = temp;
    }
};
*/