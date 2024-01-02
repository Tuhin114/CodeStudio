// CodeStudio - Majority Element (Moon's Voting Algorithm)
//  https://www.codingninjas.com/studio/problems/majority-element_6783241?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int majorityElement(vector<int> v) {
// 	 //size of the given array:
//     int n = v.size();
//     int cnt = 0; // count
//     int el; // Element

//     //applying the algorithm:
//     for (int i = 0; i < n; i++) {
//         if (cnt == 0) {
//             cnt = 1;
//             el = v[i];
//         }
//         else if (el == v[i]) cnt++;
//         else cnt--;
//     }

//     //checking if the stored element
//     // is the majority element:
//     int cnt1 = 0;
//     for (int i = 0; i < n; i++) {
//         if (v[i] == el) cnt1++;
//     }

//     if (cnt1 > (n / 2)) return el;
//     return -1;
// }