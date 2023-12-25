// CodeStudio - Rotation
// https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int findKRotation(vector<int> &arr)
// {
//     int n = arr.size();
//     int low = 0;
//     int high = n - 1;

//     while (low < high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] > arr[high])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return low;
// }
