// CodeStudio - Merge 2 Sorted Array
// https://www.codingninjas.com/studio/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

// BruteForce approach

// #include<bits/stdc++.h>
// vector < int > sortedArray(vector < int > a, vector < int > b) {
//     int n1 = a.size();
//     int n2 = b.size();
//     set<int> st;
//     for(int i = 0; i < n1; i++){
//         st.insert(a[i]);
//     }
//     for(int i = 0; i < n2; i++){
//         st.insert(b[i]);
//     }
//     vector<int> temp;
//     for(auto it : st){
//         temp.push_back(it);
//     }
//     return temp;
// }

// Optimal Solution
// Two pointers approach (Optimal Solutions)

//  vector<int> sortedArray(vector<int> a, vector<int> b) {
//     int i = 0, j = 0; // Pointers for arrays a and b
//     int n = a.size(); // Size of array a
//     int m = b.size(); // Size of array b
//     vector<int> Union; // Vector to store the union of arrays

//     // Merge unique elements of arrays a and b while maintaining sorted order
//     while (i < n && j < m) {
//         if (a[i] <= b[j]) {
//             // Check if the Union vector is empty or if the current element is different from the last element added
//             if (Union.empty() || Union.back() != a[i]) {
//                 Union.push_back(a[i]); // Add the element to the Union vector
//             }
//             i++; // Move to the next element in array a
//         } else {
//             // Check if the Union vector is empty or if the current element is different from the last element added
//             if (Union.empty() || Union.back() != b[j]) {
//                 Union.push_back(b[j]); // Add the element to the Union vector
//             }
//             j++; // Move to the next element in array b
//         }
//     }

//     // Add remaining elements from array a to the Union vector
//     while (i < n) {
//         if (Union.empty() || Union.back() != a[i]) {
//             Union.push_back(a[i]); // Add the element to the Union vector
//         }
//         i++; // Move to the next element in array a
//     }

//     // Add remaining elements from array b to the Union vector
//     while (j < m) {
//         if (Union.empty() || Union.back() != b[j]) {
//             Union.push_back(b[j]); // Add the element to the Union vector
//         }
//         j++; // Move to the next element in array b
//     }

//     return Union; // Return the merged sorted array without duplicates
// }