// CodeStudio-Ceil The Floor
// https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
// 	int start = 0;
//     int end = arr.size()-1;
//     int ceil = -1;
//     int floor = -1;

// 	while(start<=end){

//  int mid = start + (end-start)/2;

// 	 if(arr[mid]==x){
//             return {arr[mid],arr[mid]};
//                     }

//      else if(arr[mid]>x){
//         ceil = arr[mid];
//         end = mid-1;
//                         }

//      else{
//         floor = arr[mid];
//         start = mid+1;
//         }
//     }

//     return {floor,ceil};
// }