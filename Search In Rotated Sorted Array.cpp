// CodeStudio - Search In Rotated Sorted Array
// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_630450?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

// int search(int* arr, int n, int target) {
//     // Write your code here.
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         //left half is sorted
//         if(arr[low]<=arr[mid]){
//             if(target>=arr[low] && target<=arr[mid]){
//                 //this means it lies to the left:
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1; //this means it lies to the right
//             }
//         }

//         //right half is sorted
//         else{
//             if(target>=arr[mid] && target<=arr[high]){
//                 low=mid+1; //lies to the right
//             }
//             else{
//                 high=mid-1; //does not lie to the right
//             }
//         }
//     }
//     return -1; //element not found
// }