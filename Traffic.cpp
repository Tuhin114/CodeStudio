// CodeStudio - Traffic
// https://www.codingninjas.com/studio/problems/traffic_6682625?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int traffic(int n, int m, vector<int> vehicle) {

// 	int flip = 0;
//     int ans = 0;
//     int i = 0; // this will be used for traversing
//     int j = 0; // this will be used to keep a track of M (no. of zeros)

//     while (i < n) {
//         if (vehicle[i] == 0) {
//             flip++;
//         }

//         //reducing the flips to stay inside the condition

//         while (flip > m) {
//             if (vehicle[j] == 0) {
//                 flip--;
//             }
//             j++;
//         }

//         ans = max(ans, i - j + 1); //calculating the length of consequtive 1's
//         i++;
//     }

//     return ans;
// }
