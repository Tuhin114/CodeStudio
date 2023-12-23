// CodeStudio- Find Minimum in Rotated Sorted Array
// https://www.codingninjas.com/studio/problems/rotated-array_1093219?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int findMin(vector<int>& arr)
// {
// 	 int n = arr.size()-1 ;
//         int s = 0 ;
//         int e = n ;
//         int mid ;
//         while (s < e){
//             mid = s + (e-s)/2 ;
//             if (arr[mid] < arr[e]){
//                 e = mid ;
//             }
//             else if (arr[mid] > arr[e]){
//                 s = mid + 1 ;
//             }
//             else e-- ;
//         }
//         return arr[s] ;
// }