// CodeStudio - Find X raised to power N
//  https://www.codingninjas.com/studio/problems/find-x-raised-to-power-n-_626560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// double myPow(double x, int n) {
//     if(n == 0){
//         return 1;
//     }else if(n < 0){
//         n = -n;
//         return (1/x)*pow(1/x ,n-1);
//     }else{
//         return x*myPow(x, n-1);
//     }
// }