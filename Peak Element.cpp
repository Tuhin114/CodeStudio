// CodeStudio -  Find Peak Element
// https://www.codingninjas.com/studio/problems/find-peak-element_1081482?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int findPeakElement(vector<int> &arr) {
//     int start=0;
//         int end=arr.size()-1;
//         if(arr.size()==1){
//             return 0;
//             }

//         while(start<=end)
//         {
//             int mid=start+(end-start)/2;
//             if(mid==0 && arr[mid]>arr[mid+1]) {
//                 return mid; // mid 0 pr hai
//                 }
//             else if(mid==arr.size()-1 && arr[mid]>arr[mid-1]){
//                 return mid; // mid last index pr hai
//                 }
//             if(mid>0 && mid<arr.size()-1)
//             {
//                 if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//                     return mid;
//                     }
//             }
//             if(arr[mid+1]>arr[mid]){
//                 start=mid+1; // next bda hai toh uss side search krege
//                 }
//             else {
//                 end=mid-1; //prev bda hai
//                 }

//         }
//         return 0;
// }
