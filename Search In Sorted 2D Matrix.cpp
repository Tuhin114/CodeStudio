// CodeStudio -  Search In A Sorted 2D Matrix
//  https://www.codingninjas.com/studio/problems/search-in-a-sorted-2d-matrix_6917532?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// bool searchElement(vector<vector<int>> &MATRIX, int target) {
//     int n = MATRIX.size();
//     int m = MATRIX[0].size();
//     int row = 0, col = m - 1;

//     //Traverse the matrix from (0, m-1):
//     while(row < n && col >= 0){
//         if(MATRIX[row][col] == target){
//             return true;
//         }else if(MATRIX[row][col] < target){
//             row++;
//         }else{
//             col--;
//         }
//     }
//     return false;
// }