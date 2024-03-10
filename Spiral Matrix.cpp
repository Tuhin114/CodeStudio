// CodeStudio - Spiral Matrix
// https://www.codingninjas.com/studio/problems/spiral-matrix_6922069?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 vector<int> spiralMatrix(vector<vector<int>>& MATRIX) {
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    vector<int> ans;

    int strRow = 0;
    int endRow = n - 1;
    int strCol = 0;
    int endCol = m - 1;

    int total = n * m;
    int count = 0;

    while (count < total) {

        // Starting row elements
        for (int index = strCol; index <= endCol && count < total; index++) {
            ans.push_back(MATRIX[strRow][index]);
            count++;
        }
        strRow++;

        // Ending Column elements
        for (int index = strRow; index <= endRow && count < total; index++) {
            ans.push_back(MATRIX[index][endCol]);
            count++;
        }
        endCol--;

        // Ending row elements
        for (int index = endCol; index >= strCol && count < total; index--) { // Fix loop condition
            ans.push_back(MATRIX[endRow][index]);
            count++;
        }
        endRow--;

        // Starting col elements
        for (int index = endRow; index >= strRow && count < total; index--) { // Fix loop condition
            ans.push_back(MATRIX[index][strCol]);
            count++;
        }
        strCol++;
    }
    return ans;
}

*/