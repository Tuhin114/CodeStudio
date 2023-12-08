// CodeStudio-Allocate Books
//  https://www.codingninjas.com/studio/problems/ayush-gives-ninjatest_1097574?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

// #include <iostream>
// bool isPossible(int n, int m, vector<int>time, long long int mid) {
//     long long int daysCount = 1;
//     long long int chapSum = 0;
//     for (int i = 0; i < m; i++) {
//         if (chapSum + time[i] <= mid)
//         {
//             chapSum += time[i];
//         } else {
//            daysCount++;
//             if (daysCount > n || time[i] > mid) {
//                 return false;
//             }
//             chapSum = time[i];
//         }
//     }
//     return true;
// }

// long long ayushGivesNinjatest(int n, int m, vector<int>time) {
//     long long  s = 0;
//     long long  sum = 0;
//     for (long long i = 0; i < m; i++) {
//         sum += time[i];
//     }
//     long long e = sum;
//     long long  ans = 0;
//    while (s <= e) {
//         long long int mid = s + (e - s) / 2;
//         if (isPossible(n, m, time, mid)) {
//             ans = mid;
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }

//     return ans;

// }