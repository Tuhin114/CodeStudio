// CodeStudio-Implement Lower Bound
// https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int lowerBound(vector<int> arr, int n, int x) {
//  int mid=0;
//  int start=0;
//  int end=n-1;
//  if(arr[0]>x||arr[0]==x){
// return 0;
//  }
//  if(arr[n-1]<x){
//   return n;
//  }

//  while(start<=end){
//   mid=(start+end)/2;
//        if(arr[mid]==x){
//            return mid;
//        }
//        else{
//            if(arr[mid]<x){
//                start=mid+1;
//            }
//            else{
//                end=mid-1;
//            }
//        }
//  }
//  return start;
// }