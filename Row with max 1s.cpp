// CodeStudio -  Row with max 1s
//  https://www.codingninjas.com/studio/problems/row-of-a-matrix-with-maximum-ones_982768?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int lowerBound(vector<int> arr, int n, int x){
//     int low = 0, high = n - 1;
//     int ans = n;

//     while(low <= high){
//         int mid = (low + high)/2;
//         //Maybe an answer
//         if(arr[mid] >= x){
//             ans = mid;
//             //Look for smaller index on the left
//             high = mid - 1;
//         }else{
//             low = mid + 1;//Look on the
//         }
//     }
// }

// int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
// {
//     int cnt_max = 0;
//     int index = -1;

//     //Traverse the rows
//     for(int i = 0; i < n; i++){
//         //Get the number of 1's:
//         int cnt_ones = m - lowerBound(matrix[i], m, 1);
//         if(cnt_ones > cnt_max){
//             cnt_max = cnt_ones;
//             index = i;
//         }
//     }
//     return index;
// }