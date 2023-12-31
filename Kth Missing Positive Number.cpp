// CodeStudio -  Kth Missing Positive Number
// https://www.codingninjas.com/studio/problems/kth-missing-element_893215?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int missingK(vector < int > vec, int n, int k) {
//     int low = 0, high = n - 1;
//     while(low <= high){
//         int mid = high + (low - high)/2;
//         int missing = vec[mid] - (mid + 1);
//         if(missing < k){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return k + high + 1;
// }