// CodeStudio - Alternate Numbers
// https://www.codingninjas.com/studio/problems/alternate-numbers_6783445?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// vector<int> alternateNumbers(vector<int> &a)
// {
//     int n = a.size();

//     // Define array for storing the ans separetly.
//     vector<int> ans(n, 0);

//     // Positive elements start from 0 and negative from 1.
//     int posIndex = 0, negIndex = 1;
//     for (int i = 0; i < n; i++)
//     {

//         // Fill negative elements in odd indices and increase by 2
//         if (a[i] < 0)
//         {
//             ans[negIndex] = a[i];
//             negIndex += 2;
//         }
//         // Fill positive elements in even indices and increase by 2
//         else
//         {
//             ans[posIndex] = a[i];
//             posIndex += 2;
//         }
//     }
//     return ans;
// }