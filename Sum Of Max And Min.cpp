// Sum Of Max And Min
// https://www.codingninjas.com/studio/problems/sum-of-max-and-min_1081476

// #include <bits/stdc++.h>
// int sumOfMaxMin(int arr[], int n){

// 	int min = arr[0], max = arr[0];

//     // Find minimum and maximum elements in the array
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         } else if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     return min + max;
// }

// aliter but time exceeded
//  int sortAndSum(int arr[], int n){
//  	int i, j, temp;
//      for (i = 0; i < n - 1; i++) {
//          // Last i elements are already in place
//          for (j = 0; j < n - i - 1; j++) {
//              // Traverse the array from 0 to n-i-1
//              // Swap if the element found is greater than the next element
//              if (arr[j] > arr[j + 1]) {
//                  // Swap arr[j] and arr[j+1]
//                  temp = arr[j];
//                  arr[j] = arr[j + 1];
//                  arr[j + 1] = temp;
//              }
//          }
//      }
//  	return arr[0]+arr[n-1];
//  }