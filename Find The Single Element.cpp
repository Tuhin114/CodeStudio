// CodeStudio - Find The Single Element
//  https://www.codingninjas.com/studio/problems/find-the-single-element_6680465?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// #include<vector>

// int getSingleElement(vector<int> &arr){
// 	// sort(arr.begin(),arr.end());

//     //     for(int i=1;i<arr.size();i+=2){
//     //         if(arr[i]!=arr[i-1])
//     //             return arr[i-1];
//     //     }
//     //     return arr[arr.size()-1];
// 	int n = arr.size() - 1;
// 	int i = 1;

//     if(arr[0] != arr[1]){
//         return arr[0];
//     }

//     if(arr[n] != arr[n - 1]){
//         return arr[n];
//     }

// 	while(i <= n){
// 		if(arr[i] != arr[i + 1] && arr[i] != arr[i - 1]){
// 			return arr[i];

// 		}else{
// 			i++;
// 		}

// 	}
// 	return -1;
// }