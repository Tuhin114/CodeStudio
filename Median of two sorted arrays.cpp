// CodeStudio-Median of two sorted arrays
// https://www.codingninjas.com/studio/problems/median-of-two-sorted-arrays_985294?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM

// Better Approach
/**
 double median(vector<int>& a, vector<int>& b) {
    int n1 = a.size(), n2 = b.size();
    int n = n1 + n2;

    //Required indices
    int ind2 = n/2;
    int ind1 = ind2 - 1;
    int cnt = 0;
    int ind1Elem = -1;
    int ind2Elem = -1;

    //Apply merge sort
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            if (cnt == ind1) ind1Elem = a[i];
            if (cnt == ind2) ind2Elem = a[i];
            cnt++;
            i++;
        }else{
            if (cnt == ind1) ind1Elem = b[j];
            if (cnt == ind2) ind2Elem = b[j];
            cnt++;
            j++;
        }
    }

    //copy the left-out elements:
    while (i < n1) {
        if (cnt == ind1) ind1Elem = a[i];
        if (cnt == ind2) ind2Elem = a[i];
        cnt++;
        i++;
    }
    while (j < n2) {
        if (cnt == ind1) ind1Elem = b[j];
        if (cnt == ind2) ind2Elem = b[j];
        cnt++;
        j++;
    }

    //Find the median:
    if (n % 2 == 1) {
        return (double)ind2Elem;
    }

    return (double)((double)(ind1Elem + ind2Elem)) / 2.0;
}
*/