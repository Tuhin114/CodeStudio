// CodeStudio - Good Numbers
//  https://codingninjas.com/studio/problems/good-numbers_625508?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// Approach 1
/**
 bool goodNo(int x, int dig){
    int n = x;
    int sum = 0;
    //Checks if digit is in the number or not
    while(n > 0){
        if((n % 10) != dig){
            n = n/10;
        }else{
            return false;
        }
    }

    //Checks for sum conditions
    while(x >= 10){
        sum += x%10;
        if((x/10)%10 > sum){
            x = x/10;
        }else{
            return false;
        }
    }
    return true;
}

vector<int> goodNumbers(int a, int b, int digit) {
    vector<int>ans;
    for(int i = a; i <= b; i++){
        if(goodNo(i , digit)){
            ans.push_back(i);
        }
    }
    return ans;
}
*/

// Approach 2
/**
 bool goodWithoutDigit(int n, int digit) {
    if (n % 10 == digit)
        return false;

    int sum = n % 10;
    n = n / 10;

    while (n > 0) {
        if (n % 10 == digit || n % 10 <= sum)
            return false;

        sum += n % 10;
        n /= 10;
    }

    return true;
}

vector<int> goodNumbers(int a, int b, int digit) {
    vector<int> ans;

    for (int i = a; i <= b; i++) {
        if (goodWithoutDigit(i, digit))
            ans.push_back(i);
    }

    return ans;
}
*/
// Recursion
/**
 bool check(int n,int digit,int sum){
    //Base case
    if(n == 0){
        return true;
    }

    int last = n%10;
    if(last > sum && last != digit){
        sum += last;
        return check(n/10,digit,sum);
    }else{
        return false;
    }
}

vector<int> goodNumbers(int a, int b, int digit) {
    vector<int> ans;
    for(int i = a; i <= b; i++){
        //If the 1st position of the number is digit then skip the loop and check next number
        if(i % 10 == digit){
            continue;
        }else{
            if(check(i/10,digit,i%10)){
                ans.push_back(i);
            }
        }
    }
    return ans;
}
*/