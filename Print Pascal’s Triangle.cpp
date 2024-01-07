// CodeStudio - Print Pascal’s Triangle
// https://www.codingninjas.com/studio/problems/print-pascal-s-triangle_6917910?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int nCr(int n, int r)
// {
//     long long res = 1;

//     // Calculating nCr:
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return (int)(res);
// }

// vector<vector<int>> pascalTriangle(int N)
// {
//     vector<vector<int>> ans;

//     // Store the entire pascal's triangle:
//     for (int row = 1; row <= N; row++)
//     {
//         vector<int> tempList;
//         for (int col = 1; col <= row; col++)
//         {
//             tempList.push_back(nCr(row - 1, col - 1));
//         }
//         ans.push_back(tempList);
//     }
//     return ans;
// }