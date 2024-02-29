// CodeStudio - Move Zero's to End
// https://www.codingninjas.com/studio/problems/ninja-and-the-zero-s_6581958?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 vector<int> moveZeros(int n, vector<int> a) {
    int i = 0;
    for(int j = 0; j < n; j++){
        if(a[j] != 0){
            swap(a[j],a[i]);
            i++;
        }
    }
    return a;
}

*/