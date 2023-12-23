// CodeStudio -  Number of occurrence
// https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int firstOccurence(vector<int>& arr, int n, int x){

//     int low = 0, high = n-1;
//     int first = -1;

//     while(low <= high){

//         int mid = (low+high)/2;
//         //may be an answer
//         if(arr[mid] == x){
//             first = mid;
//             //look for smaller index
//             high = mid-1;
//         }
//         else if(arr[mid] < x){
//             low = mid + 1; //right
//         }else{
//             high = mid - 1; //left
//         }
//     }
//     return first;
// }

// int lastOccurence(vector<int>& arr, int n, int x){

//     int low = 0, high = n-1;
//     int last = -1;

//     while(low <= high){

//         int mid = (low+high)/2;
//         //may be an answer
//         if(arr[mid] == x){
//             last = mid;
//             //look for larger index
//             low = mid + 1;
//         }
//         else if(arr[mid] < x){
//             low = mid + 1; //right
//         }else{
//             high = mid - 1; //left
//         }
//     }
//     return last;
// }

// int count(vector<int>& arr, int n, int x) {

// 	int first = firstOccurence(arr, n, x);
//     int last  = lastOccurence(arr, n, x);

//     if( first == -1){
//         return 0;
//     }

//     else{
//         return (last - first + 1);
//     }

// }
