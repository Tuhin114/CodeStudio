// CodeStudio-Search Insert Position
// https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int searchInsert(vector<int>& arr, int m)
// {
// 	int s=0;
// 	int e=arr.size()-1;

// 	int mid=s+(e-s)/2;

// 	while(s<=e){

// 		if(arr[mid] == m){
// 			return mid;
// 		}if(arr[mid] > m){
// 			e=mid-1;
// 		}else{
// 			s=mid+1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return s;
// }