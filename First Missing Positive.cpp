// CodeStudio - First Missing Positive
// https://www.codingninjas.com/studio/problems/first-missing-positive_699946?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

// #include <bits/stdc++.h>
// #include<algorithm>
// int firstMissing(int arr[], int n)
// {
//     sort(arr,arr+n);
//     int cnt=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0 ){
//             if(arr[i]==cnt)
//               cnt++;
//             else{
//                 return cnt;
//             }
//         }
//     }   if(arr[n-1]>0)
//            return arr[n-1]+1;
//           else return 1;
// }