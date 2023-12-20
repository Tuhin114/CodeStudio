// CodeStudio-Implement Upper Bound
// https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// int upperBound(vector<int> &arr, int x, int n){

// 	int s=0;
//     int e=n-1;
//     int ans=0;

//     int mid=s+(e-s)/2;

//     if(arr[e] <= x){
//         return n;
//     }

//     while(s<=e){

//         if(arr[mid] > x){
//             ans=mid;
//             e=mid-1;
//         }else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }

//     return ans;
// }