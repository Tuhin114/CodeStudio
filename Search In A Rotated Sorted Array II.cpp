// CodeStudio-Search In A Rotated Sorted Array II
// https://www.codingninjas.com/studio/problems/search-in-a-rotated-sorted-array-ii_7449547?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
//     int l = 0;
//         int r = A.size() - 1;

//         while(l <= r)
//         {
//             int mid = l + (r-l) / 2;
//             if (A[mid] == key)
//                 return true;
// 			// with duplicates we can have this contdition, just update left & right
//             if((A[l] == A[mid]) && (A[r] == A[mid]))
//             {
//                 l++;
//                 r--;
//             }
// 			// first half
// 			// first half is in order
//             else if(A[l] <= A[mid])
//             {
// 				// key is in first  half
//                 if((A[l] <= key) && (A[mid] > key))
//                     r = mid - 1;
//                 else
//                     l = mid + 1;
//             }
// 			// second half
// 			// second half is order
// 			// key is in second half
//             else
//             {
//                 if((A[mid] < key) && (A[r]>= key))
//                     l = mid + 1;
//                 else
//                     r = mid - 1;
//             }
//         }
//         return false;
// }
