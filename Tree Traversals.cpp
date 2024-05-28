// Tree Traversals
//  https://www.naukri.com/code360/problems/tree-traversal_981269?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

/**
 void inorder(TreeNode* root, vector<int>& result){
    if (root == NULL) return;

    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);
}

void preorder(TreeNode* root, vector<int>& result){
    if (root == NULL) return;

    result.push_back(root->data);
    preorder(root->left, result);
    preorder(root->right, result);
}

void postorder(TreeNode* root, vector<int>& result) {
    if (root == NULL) return;

    postorder(root->left, result);
    postorder(root->right, result);
    result.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans;
    vector<int> result;

    inorder(root, result);
    ans.push_back(result);
    result.clear();

    preorder(root, result);
    ans.push_back(result);
    result.clear();

    postorder(root, result);
    ans.push_back(result);

    return ans;

}
*/