// CodeStudio -  Search In A 2D Matrix
//  https://www.codingninjas.com/studio/problems/search-in-a-2d-matrix_980531?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// bool searchMatrix(vector<vector<int>>& mat, int target) {
//     int n = mat.size();
//     int m = mat[0].size();

//     //Apply Binary Search
//     int low = 0, high = n*m - 1;
//     while(low <= high){
//         int mid = (low + high)/2;
//         int row = mid / m, col = mid % m;
//         if(mat[row][col] == target){
//             return true;
//         }else if(mat[row][col] < target){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return false;
// }